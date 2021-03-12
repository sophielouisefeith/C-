/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 14:41:56 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 14:47:09 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}
/* xp starts at 0 */
AMateria::AMateria(std::string const &type) : _type(type), _xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &copy) : _type(copy.getType()), _xp(copy.getXP())
{}

AMateria &AMateria::operator=(const AMateria &){
	return *this;
}


/* A Materia has an XP total starting at 0, and increasing by 10 upon every call to
17
C++ - Module 04 Subtype polymorphism, abstract classes, interfaces
use() */

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