/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:55 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:43:07 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*constructor */

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

/* deconstructory */
PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy) {
	*this = copy;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &replace){
	if (this == &replace)
		return *this;
    /* why ? operator replace wat gebeurt hier  */
	AWeapon::operator=(replace);
	return *this;

}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl ;
}