/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 13:10:08 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 16:43:19 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"


ZombieHorde::ZombieHorde(int N) : _count(N)
{
	if( N <= 0)
		return
	_zombies = new Zombie[N];
    std::string tip[5] = {
	"lazy","doush","sweet","useless","old"};
	for (int i = 0; i < _count; i++)
       _zombies[i].setType(tip[rand() % 5]);
	RandomChump();
}

ZombieHorde::~ZombieHorde(void) {
	delete[] _zombies;}

std::string names[5] = {
	"jtiks","mero","Lover","Listo","Lunett"
    
} ;

void ZombieHorde::RandomChump(void)
{
	srand(time(NULL));
	for (int i = 0; i < _count ; i++)
		_zombies[i].setName(names[rand() % 5]);
}

void ZombieHorde::announce()
{
	for (int i = 0; i < _count; i++)
		_zombies[i].announce();
}