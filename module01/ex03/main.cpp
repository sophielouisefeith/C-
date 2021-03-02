/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:02 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 14:29:54 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde collective(5);
	std::cout << YELLOW << "we announce " << RESET << std::endl;
    collective.announce();
	return (0);
}
    
   