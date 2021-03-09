/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:15:40 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:39:12 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name)
{
	this->_apcost = apcost;
	this->_damage = damage;	
}

AWeapon::~AWeapon() {}
AWeapon::AWeapon() {}

AWeapon::AWeapon(const AWeapon &copy) {
	*this = copy;
}

AWeapon &AWeapon::operator=(const AWeapon &current){
	if (this == &current)
		return *this;
	this->_name = current._name;
	this->_damage = current._damage;
	this->_apcost = current._apcost;	
	return *this;
}

int AWeapon::getAPCost() const{
	return (this->_apcost);
}

int AWeapon::getDamage() const{
	return (this->_damage);
}

std::string AWeapon::getName () const{
	return (this->_name);
}
