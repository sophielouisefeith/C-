/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:48 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:44:01 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(){}
Enemy::~Enemy(){}


Enemy::Enemy(int hp, std::string const &type) : _type(type) {
	this->_hp = hp;
}



Enemy::Enemy(const Enemy &copy){
	*this = copy;
}

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

Enemy &Enemy::operator=(const Enemy &replace){
	if (this == &replace)
		return *this;
	this->_type = replace._type;
	this->_hp = replace._hp;
	return *this;
}

/*An enemy can take damage (which reduces his HP). If the damage is <0, don’t do
anything. */
void Enemy::takeDamage(int damage){
	if (damage < 0)
		damage = 0;
	if (this->_hp - damage <= 0)
		damage = this->_hp;
    /* we reduce the hp with damage  */
	this->_hp -= damage;
}






