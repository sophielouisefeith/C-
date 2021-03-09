/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:52:54 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:55:54 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main() 
{
	ISpaceMarine* bob = new TacticalMarine; 
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* karel = new TacticalMarine;
	
	ISquad* vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	std::cout << vlc->push(karel) << std::endl ;
	for (int i = 0; i < vlc->getCount(); ++i) 
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry(); 
		cur->rangedAttack(); 
		cur->meleeAttack();
	}
	ISpaceMarine* nth = vlc->getUnit(1);
	nth->battleCry();
	
	delete vlc;
	
	return 0; 
}