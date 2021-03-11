/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:39 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 12:19:18 by sfeith        ########   odam.nl         */
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

/* we replace the replace data  */
AWeapon &AWeapon::operator=(const AWeapon &replace){
	if (this == &replace)
		return *this;
	this->_name = replace._name;
	this->_damage = replace._damage;
	this->_apcost = replace._apcost;	
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