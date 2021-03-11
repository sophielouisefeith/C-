/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:40:16 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:38:52 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Enemy.hpp"


class SuperMutant : public Enemy{
    public:
        /*constructor */
        SuperMutant();
        /* we use virtual we need to do this there is a higher class */
        virtual ~SuperMutant();
        /* copy constructor  */
        SuperMutant(const SuperMutant &copy);
        /* we use the operator to replace the current */
		SuperMutant &operator=(const SuperMutant &replace);
        /* take damage but we give here a diferent damage to the enemey */
		void takeDamage(int damage);
} ;