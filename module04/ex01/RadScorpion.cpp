/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:40:09 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:28:08 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*constructor */

/* we get information hp and type from enemy  */

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {

    std::cout << "click click click" << std::endl;
}

/* deconstructory */
RadScorpion::~RadScorpion() {


      std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) :Enemy(copy) {
	*this = copy;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &replace){
	if (this == &replace)
		return *this;
    /* why ? operator replace wat gebeurt hier  */
	Enemy::operator=(replace);
	return *this;

}

void RadScorpion::takeDamage(int damage) { 
	Enemy::takeDamage(damage);
}