/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:28:58 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 12:39:40 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl ;
}

Peon::Peon(const Peon &copy) : Victim(copy) {
	*this = copy;
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl ;
}

Peon &Peon::operator=(const Peon &current){
	if (this == &current)
		return *this;
	Victim::operator=(current);
	return *this;
}

void Peon::getPolymorphed(void) const{
	std::cout << get_name() << " was just polymorphed into a pink pony!" << std::endl  ;
}