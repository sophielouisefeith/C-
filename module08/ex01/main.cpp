/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:46:09 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 17:28:48 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	Span sp1 = Span(5);
	Span sp2 = Span(3);
	Span sp3 = Span(1);
	try {
		std::cout << "Regular test:" << std::endl ;
		sp1.addNumber(5); 
		sp1.addNumber(3); 
		sp1.addNumber(17); 
		sp1.addNumber(9); 
		sp1.addNumber(11);
		std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl; 
		std::cout << "Longest span: " << sp1.longestSpan() << std::endl << std::endl ;

		std::cout << "Test with only zero's as number:" << std::endl ;
		sp2.addNumber(0);
		sp2.addNumber(0);
		sp2.addNumber(0);
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl; 
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl << std::endl ;

		std::cout << "Test with a container containing only one number:" << std::endl;
		sp3.addNumber(9);
		sp3.longestSpan();
	}
catch (std::exception &e){
	std::cout << e.what() << std::endl;
}
try	{
	std::cout << std::endl << "Trying to add a number to a container that is already full:" << std::endl;
	sp3.addNumber(5);
	}
catch (std::exception &e){
	std::cout << e.what() << std::endl;
	}
Span sp4 = Span(ITERATOR);
srand(time(NULL));
try {
	std::cout << std::endl << "Change the global to decide how many numbers there are added:" << std::endl ;
	for (int i = 0; i < ITERATOR ; i++){
		sp4.addNumber(rand());
	}
	std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl; 
	std::cout << "Longest span: " << sp4.longestSpan() << std::endl ;
}
 catch (std::exception &e){
	std::cout << e.what() << std::endl;
	}
}