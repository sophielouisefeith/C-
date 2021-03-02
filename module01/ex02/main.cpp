/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:02 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 14:09:25 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main()
{
	ZombieEvent	event;
	Zombie		zombie;
	Zombie		*zomby;
	Zombie		*zombi;

    std::cout << YELLOW << " here we use the zombie function"<< RESET <<std::endl;

	zombie = Zombie("masha", "attacking");
	zombie.announce();
	
     std::cout << YELLOW << " here we first set the zombytipe with event from ZombieEvent vent and then choose a new Zombi"<< RESET <<std::endl;
	event.setZombieType("tactick");
	zomby = event.newZombie("Loes");
	zomby->announce();
	delete zomby;

    std::cout << YELLOW << " here we use the random function who would it be"<< RESET <<std::endl;
	event.setZombieType("unmortal");
	zombi = NULL;
	zombi = event.newZombie(zombi->RandomChump());
	zombi->announce();
	delete zombi;
	
	return (0);
}
	
