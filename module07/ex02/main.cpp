/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:23:44 by sfeith        #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2021/03/02 12:58:02 by SophieLouis   ########   odam.nl         */
=======
/*   Updated: 2021/03/02 12:55:37 by sfeith        ########   odam.nl         */
>>>>>>> c474b0abfc217205b83c6c9ecd2789ae1131ad2f
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"



int main(void){



    return 0;
}


#include "Array.hpp"

int main(){
	Array<int> test1(3);
	Array<float> test2(5);
	Array<char> test3(7);
	try {
		for (unsigned int i = 0; i < test1.size(); i++)
			std::cout << test1[i] << " ";
		std::cout << std::endl ;
		std::cout << "-- Trying to access an element that is out of bounds. --" << std::endl ;
		test1[5];
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	try{
		for (unsigned int i = 0; i < test2.size(); i++){
			test2[i] = i + 0.1 ;
			std::cout << test2[i] << " ";
		}
		std::cout << std::endl ;
		for (unsigned int i = 0; i < test3.size(); i++){
			test3[i] = 97 + i;
			std::cout << test3[i] << " ";
		}
		std::cout << std::endl ; 
		std::cout << test3.size() << std::endl ;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}