/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:15:38 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:41:01 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy) {
	*this = copy;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &current){
	if (this == &current)
		return *this;	
	AWeapon::operator=(current);
	return *this;

}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl ;
}
