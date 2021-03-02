/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:41:29 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 14:41:43 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main(){
	try{
		std::list<int> container1;
		std::list<int> container2;
		std::list<int> container3;

		std::cout << "Test with a container with twice the number to be searched:" << std::endl;
		container1.push_back(14);
		container1.push_back(900);
		container1.push_back(14);
		container1.push_back(23);
		container1.push_back(5);
		easyfind(container1, 14);
		std::cout<<std::endl;
		
		std::cout << "Test with a container with all different numbers:" << std::endl;
		container2.push_back(14);
		container2.push_back(25);
		container2.push_back(900);
		container2.push_back(23);
		container2.push_back(5);
		easyfind(container2, 23);
		std::cout<<std::endl;
		
		std::cout << "Test with a container where the number to be found doesn't occur:" << std::endl ;
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