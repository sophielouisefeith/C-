/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:18:30 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 10:19:25 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &copy) : AMateria(copy){
	*this = copy;
}

Ice &Ice::operator=(const Ice &current){
	if (this == &current)
		return *this;
	AMateria::operator=(current);
	return *this;
}

AMateria *Ice::clone()const{
	return new Ice(*this);
}

void			Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}