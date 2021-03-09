/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:18:21 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 14:59:37 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) 
: _type(type), _xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &copy) 
: _type(copy.getType()), _xp(copy.getXP())
{}

AMateria &AMateria::operator=(const AMateria &){
	return *this;
}

void  AMateria::use(ICharacter& target){
	this->_xp += 10;
	(void)target;
}

std::string const &AMateria::getType() const{
	return this->_type;
}

unsigned int AMateria::getXP() const{
	return this->_xp;
}