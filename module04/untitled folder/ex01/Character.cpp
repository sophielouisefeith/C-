/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:05:09 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:59:21 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"

Character::Character() {}

Character::Character(const std::string &name) : _name(name) {
	_ap = 40;
}

Character::~Character() {}

Character::Character(const Character &copy){
	*this = copy;
}

Character &Character::operator=(const Character &current){
	if (this == &current)
		return *this;
	this->_ap = current._ap;
	this->_name = current._name;
	this->_my_weapon = current._my_weapon;
	return *this;
}

void Character::recoverAP(){
	if (this->_ap + 10 >= 40)
			this->_ap = 40;
	else
		this->_ap += 10;
}

void Character::equip(AWeapon *weapon) {
	this->_my_weapon = weapon; 
}

void Character::attack(Enemy* enemy){
	if (this->_ap - _my_weapon->getAPCost() <= 0)
	{
		std::cout << "** You don't have enough action points to fight with this weapon. **" << std::endl ;
		return;
	}
	else
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << _my_weapon->getName() << std::endl ;
		enemy->takeDamage(this->_my_weapon->getDamage());
		this->_my_weapon->attack();
		this->_ap -= this->_my_weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

int Character::getAP() const {
	return this->_ap; 
}

AWeapon *Character::getWeapon() const {
	return this->_my_weapon; 
}

std::string Character::getName() const {
	return this->_name;
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
    if (character.getWeapon())
		std::cout << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << "." << std::endl ;
	else
		std::cout << character.getName() << " has " << character.getAP() << " AP and is unarmed." << std::endl ;
	return (out);	
}
