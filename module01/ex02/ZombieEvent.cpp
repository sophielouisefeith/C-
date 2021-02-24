/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZoombieEvent.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:15 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/22 15:24:26 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
	return;
}

ZombieEvent::~ZombieEvent( void ) {
	return;
}

void		ZombieEvent::setZombieType(std::string type) {
	this->ZombieType = type;
}

Zombie*		ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie();

	zombie->setName(name);
	zombie->setType(this->ZombieType);
	return (zombie);
}

void ZombieEvent::RandomChump(void){
    
    Zombie Bychange;

    std::string names[10]={
        "Banshee", "Flalaky", "Giggles", "Mime","Lammy", "Zavia", " Marjo",
    };
    
    std::srand(time(NULL));
    Zombie zombie = Zombie(names[std::rand() % 10], "Bychange");
    zombie.announce_zombie();
}