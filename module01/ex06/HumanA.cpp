/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 13:06:39 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 15:46:47 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon): _Weapon(weapon), _name(name) {
    std::cout << BOLDBLUE << "Constructor creates HumanA " << RESET << std::endl; 
    std::cout << "Name : "<< this->_name << std::endl;
    std::cout << "Weapon: "<<this->_Weapon.getType() << std::endl;
    return;
}

HumanA::~HumanA(){

    std::cout << BOLDBLUE  << "HumanA dies" << RESET <<std::endl;
}

std::string HumanA::GetName(void){
    return(this->_name);
}

void HumanA::setName(std::string Rename)
{
    this->_name = Rename;
}

void        HumanA::attack()
{
    
    std::cout << GREY << this->_name << " Attacks with his : " << this->_Weapon.getType() << RESET<< std::endl;
}