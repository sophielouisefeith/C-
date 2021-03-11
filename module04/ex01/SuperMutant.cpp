/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:40:14 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:23:08 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*constructor */

/* we get information hp and type from enemy  */

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {

    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

/* deconstructory */
SuperMutant::~SuperMutant() {


      std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) :Enemy(copy) {
	*this = copy;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &replace){
	if (this == &replace)
		return *this;
    /* why ? operator replace wat gebeurt hier  */
	Enemy::operator=(replace);
	return *this;

}

void SuperMutant::takeDamage (int damage){
	damage -= 3;
    /* so we give here 3 damage points extra to the function enemy  */
	Enemy::takeDamage(damage);
}
