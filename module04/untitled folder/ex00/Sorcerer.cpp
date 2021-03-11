/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 10:52:24 by merelmourik   #+#    #+#                 */
/*   Updated: 2021/03/09 14:49:30 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << this->_name << " , " << this->_title << ", is born!" << std::endl ;
}

Sorcerer::~Sorcerer(){
	std::cout << this->_name << " , " << this->_title << ", is dead. Consequences will never be the same!" << std::endl ;
}

Sorcerer::Sorcerer(const Sorcerer &copy){
	*this = copy;
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
    out << "I am " << sorcerer.get_name() << ", " << sorcerer.get_title();
    out << ", and i like ponies" << std::endl;
    return (out);
}

Sorcerer &Sorcerer::operator=(const Sorcerer &current){
	if (this == &current)
		return *this;
	this->_name = current._name;
	this->_title = current._title;
	return *this;
}

void Sorcerer::polymorph(Victim const &victim){
	victim.getPolymorphed();
}

std::string Sorcerer::get_name() const {
	return this->_name;
}

std::string Sorcerer::get_title() const {
	return this->_title;
}
