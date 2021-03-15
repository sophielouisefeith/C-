/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:40:11 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:38:47 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Enemy.hpp"

//*this verwijst naar alle varable in je class 


class RadScorpion : public Enemy{
    public:
        /*constructor */
        RadScorpion();
        /* we use virtual we need to do this there is a higher class */
        virtual ~RadScorpion();
        /* copy constructor  */
        RadScorpion(const RadScorpion &copy);
        /* we use the operator to replace the current */
		RadScorpion &operator=(const RadScorpion &replace);
        /* take damage but we give here a diferent damage to the enemey */
		void takeDamage(int damage);
} ;