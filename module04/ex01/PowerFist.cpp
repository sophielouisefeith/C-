/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:40:04 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:43:18 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*constructor */

PowerFist::PowerFist() : AWeapon("Power First", 50, 8) {}

/* deconstructory */
PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy) {
	*this = copy;
}

PowerFist &PowerFist::operator=(const PowerFist &replace){
	if (this == &replace)
		return *this;
    /* why ? operator replace wat gebeurt hier  */
	AWeapon::operator=(replace);
	return *this;

}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! * *" << std::endl ;
}