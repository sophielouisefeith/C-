/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:15 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 13:44:33 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {}
ZombieEvent:: ~ZombieEvent(void){}

void ZombieEvent::setZombieType(std::string type) { this->_type = type; }

Zombie *ZombieEvent::newZombie(std::string name) { return (new Zombie(name, _type)); }
