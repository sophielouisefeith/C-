/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 10:45:00 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/24 11:55:11 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"



Base*	generate() {

    /* we use switch to chose randomly 3 times between de 3 cases ! */
	switch (rand() % 3) {
		case 0:
			return dynamic_cast<Base*>(new A);

		case 1:
			return dynamic_cast<Base*>(new B);

		case 2:
			return dynamic_cast<Base*>(new C);

		default:
			return NULL;
	}


}


void identify_from_pointer(Base* p) {

	A* classA = dynamic_cast<A*>(p);
	if (classA != NULL) {
		std::cout << "A" << std::endl;
		return;
	}

	B* classB = dynamic_cast<B*>(p);
	if (classB != NULL) {
		std::cout << "B" << std::endl;
		return;
	}

	C* classC = dynamic_cast<C*>(p);
	if (classC != NULL) {
		std::cout << "C" << std::endl;
		return;
	}
}

void identify_from_reference(Base& p) {

    std::cout << BLUE <<"The right output should be blue " << RESET << std::endl;
	try
	{
		A classA = dynamic_cast<A&>(p);
		std::cout << BLUE << "A" <<RESET<< std::endl;
		return;
	}
	catch (std::bad_cast& e) {
        std::cout << " I should not be an : A "<< e.what() << '\n';
	}
      
	try
	{
		B classB = dynamic_cast<B&>(p);
		std::cout << BLUE << "B" << RESET << std::endl;
		return;
	}
	catch (std::bad_cast& e) {
        std::cout << " I should not be an : B "<< e.what() << '\n';
	}

	try
	{
		C classC = dynamic_cast<C&>(p);
		std::cout << BLUE << "C" << RESET << std::endl;
		return;
	}
	catch (std::bad_cast& e) {
        std::cout << " I should not be an : C "<< e.what() << '\n';

	}
}

