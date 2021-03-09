/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:15:43 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:42:03 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy) {
	*this = copy;
}

PowerFist &PowerFist::operator=(const PowerFist &current){
	if (this == &current)
		return *this;
	AWeapon::operator=(current);
	return *this;
}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl ;
}
