/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 13:10:12 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 13:26:08 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{

    public:

    ZombieHorde();
    ZombieHorde(int N);
    /* same as in zombieevent */
    void RandomChump();
	void announce();
    ~ZombieHorde();

    private:
		Zombie *_zombies;
		int _count;
       
};