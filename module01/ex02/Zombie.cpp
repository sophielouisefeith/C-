/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:09 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/22 15:28:57 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


//*Now the actual point of the exercise: Your Zombies must be destroyed at appropriate
//times (so, when they are not needed anymore). They must also be allocated in the appropriate fashion: Some times it’s appropriate to have them on the stack, at other times
//the heap is a better choice. You will have to justify what you did to get a positive grade
//*
Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie( void ) {
	return;
}


std::string		Zombie::getName( void ) const {
	return this->_name;
}

std::string		Zombie::getType( void ) const {
	return this->_type;
}

void			Zombie::setName(std::string newName) {
	this->_name = newName;
}

void			Zombie::setType(std::string newType) {
	this->_type = newType;
}

Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
	return;
}


void  Zombie::announce_zombie(void)
{

    std::cout << "<"<< this->_name << "(" << this ->_type <<" ( "<<"Braiiiiiiinnnssss... "<<std::endl;

}