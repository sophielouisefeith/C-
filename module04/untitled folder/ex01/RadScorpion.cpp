/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:15:41 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:42:43 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl ;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH " << std::endl ;
}

RadScorpion::RadScorpion(const RadScorpion &copy) :Enemy(copy) {
	*this = copy;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &current){
	if (this == &current)
		return *this;
	Enemy::operator=(current);
	return *this;
}

void RadScorpion::takeDamage(int damage) { 
	Enemy::takeDamage(damage);
}