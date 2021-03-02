/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:09 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 14:15:44 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


//*Now the actual point of the exercise: Your Zombies must be destroyed at appropriate
//times (so, when they are not needed anymore). They must also be allocated in the appropriate fashion: Some times it’s appropriate to have them on the stack, at other times
//the heap is a better choice. You will have to justify what you did to get a positive grade
//*


Zombie::Zombie(void) {}
Zombie::~Zombie(void) {}

void Zombie::setName(std::string name) { this->_name = name; }

void Zombie::setType(std::string type) { this->_type = type; }

void Zombie::announce()
{
		std::cout << "This is " << _name << " a " << _type << " zombie." <<std::endl ;
}