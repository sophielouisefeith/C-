/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:43 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 14:59:55 by sfeith        ########   odam.nl         */
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

/* how did we come to recover */
void Character::recoverAP(){
	if (this->_ap + 10 >= 40)
			this->_ap = 40;
	else
		this->_ap += 10;
}

/*equip() will just store a pointer to the weapon, there’s no copy involved. */

void Character::equip(AWeapon *weapon) {
	this->_my_weapon = weapon; 
}


/*No AP, no attack. */
void Character::attack(Enemy* enemy){
	if (this->_ap - _my_weapon->getAPCost() <= 0)
	{
		std::cout << "** You don't have enough action points to fight with this weapon. **" << std::endl ;
		return;
	}
	else
	{
		/* weapon you get from Aweapon  */
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

/*You will also implement an overload of the << to ostream operator to display the
attributes of your Character . Add every necessary getter function.
This overload will display: */
std::ostream &operator<<(std::ostream &out, Character const &character)
{
    if (character.getWeapon())
		std::cout << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << "." << std::endl ;
	else
		std::cout << character.getName() << " has " << character.getAP() << " AP and is unarmed."<< std::endl ;
	return (out);	
}
