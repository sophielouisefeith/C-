/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 13:06:45 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 21:14:19 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, Weapon &weapon) : _Weapon(&weapon), _name(name) {
    std::cout << BOLDBLUE << "Constructor creates HumanB " << RESET << std::endl; 
    std::cout << "Name : "<< this->_name << std::endl;
    std::cout << "Weapon: "<<this->_Weapon->getType() << std::endl;
    return;
}


HumanB::HumanB(std::string name) : _name(name)
{
    return;
    
}
HumanB::~HumanB(){

    std::cout << BOLDBLUE  << "HumanB dies" << RESET <<std::endl;
}

std::string HumanB::GetName(void){
    return(this->_name);
}

void HumanB::setName(std::string Rename)
{
    this->_name = Rename;
}

Weapon*     HumanB::GetWeapon(void){

    return(this->_Weapon);
}

void		HumanB::setWeapon(Weapon &revalueType) {
	this->_Weapon = &revalueType;
}

void        HumanB::attack()
{
    
    std::cout << GREY << this->_name << " Attacks with his : " << this->_Weapon->getType() << RESET<< std::endl;
}