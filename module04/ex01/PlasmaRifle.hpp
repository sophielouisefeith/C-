/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:40:01 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:36:13 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
    public:
        /*constructor */
        PlasmaRifle();
        /* we use virtual we need to do this there is a higher class */
        virtual ~PlasmaRifle();
        /* copy constructor  */
        PlasmaRifle(const PlasmaRifle &copy);
        /* we use the operator to replace the current */
		PlasmaRifle &operator=(const PlasmaRifle &replace);
        /* this function comes from Aweapon there it is virtual */
		void attack() const;
} ;
