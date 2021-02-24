/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:58:47 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 15:50:48 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon:: Weapon(){
    std::cout << BOLDBLUE  << " constructor creates weapon" << RESET <<std::endl;
    return;
}

Weapon::Weapon(std::string type)
{
    this->_type = type;   //put the value of type in the private
    return;
}

const std::string		&Weapon::getType( )const
{
    return(this->_type);
}

void					Weapon::setType(std::string revalueType)
{
	this->_type = revalueType;
    return;
}

Weapon:: ~Weapon(){
    std::cout << BOLDBLUE  << "Deconstructor destroys weapon" << RESET <<std::endl;
    return;
}