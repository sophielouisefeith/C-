/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:53 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 15:00:15 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"



/*                                 Character                  Enemy                   */
/*              Aweapon                                                */
/*    plasmarifle  |  Powerfirst             SuperMutant  | RadScorpion              */


#include <iostream>



int main(void) {
    
	Character* me = new Character("me"); 
	Character* so = new Character("so"); 
	
	std::cout << *me;  // with the * roep je de overload operator aan van de output 
	
	Enemy* rad = new RadScorpion();
	Enemy* super = new SuperMutant();

	/* maak wapen aan nog niet verbonden aan character */
	
	AWeapon* plasma = new PlasmaRifle(); 
	AWeapon* power = new PowerFist();
	
	/* je pakt een wapen op */
	me->equip(plasma); 
	so->equip(power); 
	std::cout << *me; 
	std::cout << *so; 
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

    delete me;
	
	return 0; 
}