/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:15:35 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:39:27 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _type(type) {
	this->_hp = hp;
}

Enemy::~Enemy() {}
Enemy::Enemy() {}

Enemy::Enemy(const Enemy &copy){
	*this = copy;
}

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

Enemy &Enemy::operator=(const Enemy &current){
	if (this == &current)
		return *this;
	this->_type = current._type;
	this->_hp = current._hp;
	return *this;
}

void Enemy::takeDamage(int damage){
	if (damage < 0)
		damage = 0;
	if (this->_hp - damage <= 0)
		damage = this->_hp;
	this->_hp -= damage;
}