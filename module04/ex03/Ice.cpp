/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 15:10:21 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 15:10:29 by sfeith        ########   odam.nl         */
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