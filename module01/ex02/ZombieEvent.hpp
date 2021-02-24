/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:12 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/22 15:23:50 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include "Zombie.hpp"

# include <iostream>

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();
        void   setZombieType(std::string type);
        Zombie*  newZombie(std::string name);
        void RandomChump();

    private:
        std::string ZombieType;
};

#endif