/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 15:01:28 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 15:03:20 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &copy) : AMateria(copy) {
	*this = copy;
}

Cure &Cure::operator=(const Cure &current) {
	if (this == &current)
		return *this;
	AMateria::operator=(current);
	return *this;
}

AMateria *Cure::clone(void) const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds. *" << std::endl ;
	AMateria::use(target);
}