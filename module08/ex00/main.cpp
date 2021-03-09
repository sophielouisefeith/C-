/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:41:29 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/08 13:44:17 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main(){
	try{
		/* we make an container(s) wity type int */
		std::list<int> container1;
		std::list<int> container2;
		std::list<int> container3;
		/* Adds a new element at the end of the vector, after its current last element. The content of val is copied (or moved) to the new element.

		This effectively increases the container size by one, which causes an automatic reallocation of the allocated storage space 
		if -and only if- the new vector size surpasses the current vector capacity. */
		std::cout << YELLOW <<  "Test with a container with twice the number to be searched:" << RESET << std::endl;
		/* we use push back to push the number to end of the container */
		container1.push_back(14);
		container1.push_back(900);
		container1.push_back(14);
		container1.push_back(23);
		container1.push_back(5);

		easyfind(container1, 23);
		
	
		std::cout<<std::endl;
		
		
		std::cout << YELLOW << "Test with a container where the number to be found doesn't occur:" << RESET << std::endl ;
		container3.push_back(14);
		container3.push_back(12);
		container3.push_back(900);
		easyfind(container3, 5);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	return(0);
}