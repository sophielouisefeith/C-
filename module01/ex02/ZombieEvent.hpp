/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:12 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 13:44:51 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "iostream"
#include "Zombie.hpp"

class ZombieEvent{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);

	private:
		std::string _type;
} ;

#endif