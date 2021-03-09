/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 10:04:48 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:48:15 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl ;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl ;
}

SuperMutant::SuperMutant(const SuperMutant &copy): Enemy(copy) {
 	*this = copy;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &current){
	if (this == &current)
		return *this;
	Enemy::operator=(current);
	return *this;
}

void SuperMutant::takeDamage (int damage){
	damage -= 3;
	Enemy::takeDamage(damage);
}
