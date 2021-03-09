/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:18:27 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 15:35:41 by merelmourik   ########   odam.nl         */
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