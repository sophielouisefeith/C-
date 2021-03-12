/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 11:44:58 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 14:44:36 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl ;	
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy){
	*this = copy;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &replace){
	(void)replace;
	return *this;
}

ISpaceMarine *TacticalMarine::clone() const {
	TacticalMarine *copy = new TacticalMarine(*this);
	return copy;
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl ;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl ;
	
}

void TacticalMarine:: meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl ;
}