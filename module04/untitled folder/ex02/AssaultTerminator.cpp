/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:55:34 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 14:11:36 by merelmourik   ########   odam.nl         */
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
