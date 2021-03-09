/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:23:44 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/09 13:43:27 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main(){
	Array<int> test1(0);
	std::cout << YELLOW << " INT "<< RESET << std::endl ;
	
	try {
		/* construnction creates an array  */
		for (unsigned int i = 0; i <= test1.size(); i++)
			std::cout << test1[i] << " ";
		std::cout << std::endl ;
		
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}

	std::cout << YELLOW << " FLOAT "<< RESET << std::endl ;
	
	Array<float> test2(0);
	try{
		/* construnction creates an array  */
		for (unsigned int i = 0; i <= test2.size(); i++){
			test2[i] = i + 65.46 ;
			std::cout << test2[i] << " ";
			std::cout << YELLOW << " display  the number of elements in the array : "<<test2.size() << RESET << std::endl ;
		}
	}
		
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}

	std::cout << YELLOW << " CHARACTER "<< RESET << std::endl ;
	Array<char> test3(0);
	try{
		for (unsigned int i = 0; i <= test3.size(); i++){
			test3[i] = 900 + i;
			std::cout << "Im a character :" <<std::endl;
			std::cout << test3[i] << " "<< "how many characters"<<i <<std::endl;
		}
		std::cout << std::endl ; 
		std::cout << YELLOW << " display  the number of elements in the array : "<<test3.size() << RESET << std::endl ;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
	
}