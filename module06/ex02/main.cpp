/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 15:20:05 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/23 15:41:53 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void) {

    /*fill data */
	std::cout << BLUE << "We start with serialization " << RESET << std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	

    std::cout << BLUE << "We will go to the deserialize function to reinterpet from void to string we expect the same result " << RESET << std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	
	
	

	std::cout << BLUE << "We should delete the space we used on the heap" << RESET << std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;


	srand(time(0));
    
	Base* base = generate();

	identify_from_pointer(base * p);
	identify_from_reference(*base & p);

	delete  base;



	return 0;
}