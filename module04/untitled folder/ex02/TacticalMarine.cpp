/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:18:17 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/08/27 14:15:50 by merelmourik   ########   odam.nl         */
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

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &current){
	(void)current;
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