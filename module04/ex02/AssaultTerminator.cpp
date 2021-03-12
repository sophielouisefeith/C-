/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 14:37:59 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 11:54:25 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl ;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy) {
	*this = copy;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &current){
	(void)current;
	return *this;
}

ISpaceMarine *AssaultTerminator::clone() const {
	AssaultTerminator *copy = new AssaultTerminator(*this);
	return copy;
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl ;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl ;
}

void AssaultTerminator:: meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl ;
}