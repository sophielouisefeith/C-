/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:18:24 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 10:57:38 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>

Character::Character(std::string const &name)
: _name(name) {
	for (int i = 0; i < 4; i++)
		this->_invent[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_invent[i])
			delete this->_invent[i];
}

Character::Character(const Character &copy){
	this->_name = copy.getName();
	for (int i = 0; i < 4; i++)
		if (this->_invent[i])
			delete this->_invent[i];
	for (int i = 0; i < 4; i++)
		if (copy._invent[i])
			this->_invent[i] = copy._invent[i]->clone();	
}

Character &Character::operator=(const Character &current){
	if (this == &current)
		return *this;	
	for (int i = 0; i < 4; i++) {
		if (current._invent[i])
			this->_invent[i] = current._invent[i];
		else
			this->_invent[i] = NULL;
		}
	return *this;			
}

std::string const &Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria *amateria){
	for (int i = 0; i < 4; i++)
		if (this->_invent[i] == NULL){
			this->_invent[i] = amateria;
		return;
	}
}

void Character::un_equip(int i){
	if (i >= 0 && i < 4)
		this->_invent[i] = NULL;
}

void Character::use(int i, ICharacter &target){
	if (i >= 0 && i < 4 && this->_invent[i] != NULL)
		this->_invent[i]->use(target);
}