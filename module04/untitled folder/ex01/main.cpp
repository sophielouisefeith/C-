/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:56:23 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:47:08 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include "SuperMutant.hpp"

int main() {
	Character* me = new Character("me"); 
	
	std::cout << *me;
	
	Enemy* rad = new RadScorpion();
	Enemy* super = new SuperMutant();
	
	AWeapon* plasma = new PlasmaRifle(); 
	AWeapon* power = new PowerFist();
	
	me->equip(plasma); 
	std::cout << *me; 
	me->equip(power);
	
	me->attack(rad);
	std::cout << *me; 
	me->equip(plasma); 
	std::cout << *me; 
	me->attack(rad); 
	std::cout << *me;
	me->attack(rad); 
	std::cout << *me;

	me->equip(power);
	std::cout << *me;
	
	me->attack(super);
	std::cout << *me;	
	me->attack(super);
	std::cout << *me;
	me->attack(super);
	
	return 0; 
}