/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Goat.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:26:46 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:29:24 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Goat.hpp"

Goat::Goat(const std::string &name) : Victim(name) {
	std::cout << "Behh, Behh." << std::endl ;
}

Goat::Goat(const Goat &copy) : Victim(copy) {
	*this = copy;
}

Goat::~Goat(){
	std::cout << "Mehh, Mehh..." << std::endl ;
}

Goat &Goat::operator=(const Goat &current){
	if (this == &current)
		return *this;
	Victim::operator=(current);
	return *this;
}

void Goat::getPolymorphed(void) const{
	std::cout << get_name() << " was just polymorphed into a horse!" << std::endl  ;
}