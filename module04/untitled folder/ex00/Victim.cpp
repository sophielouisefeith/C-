/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:12:31 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:36:08 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << this->_name << " just appeard!" << std:: endl;
}

Victim::Victim(const Victim &copy) {
	*this = copy;
}

Victim::~Victim(){
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl ;
}

Victim &Victim::operator=(const Victim &current){
	if (this == &current)
		return *this;
	this->_name = current._name;
	return *this;
}

void Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep" << std::endl ;
}

std::string Victim::get_name() const {
	return this->_name; 
}


std::ostream &operator<<(std::ostream &out, Victim &victim){
	out << "I'm " << victim.get_name() << " and I like otters!" << std::endl ;
	return (out);
}