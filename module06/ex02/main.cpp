/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 15:20:05 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/24 11:52:54 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int	main(void) {




	/* random number  */
	std::cout << "test the function below put me on and off " << std::endl; 
	srand(time(0));
	std::cout << BLUE << "Am i a random number!? 				" << rand()%100 << std::endl;
	std::cout << BLUE <<"i should be different then the number above me	"<< rand()%100 << std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	std::cout << YELLOW << "OKE FIRST STEP we will Dynamic cast the different types and make place on the heap " << RESET << std::endl;
	/* Generate  */
	Base* base = generate();
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	std::cout << YELLOW << "now we will identify the random case of the pointer what wil it be? " << RESET << std::endl;
	/* pointer  */
	identify_from_pointer(base);
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	std::cout << YELLOW << "now we will identify the random case of a reference it shouls be the same as the pointer! " << RESET << std::endl;
	/* reference  */
	identify_from_reference(*base);
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	/* Delete */
	std::cout << YELLOW << "we used NEW so we should delete!" << RESET << std::endl;
	delete  base;
	

	return 0;
}