/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:46 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 14:59:21 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

/*                                 Character                                     */
/*              Aweapon                             Enemy                        */
/*    plasmarifle  |  Powerfirst          SuperMutant  | RadScorpion                */

class Character{
	public:
		Character();
		Character(const std::string &name);
		~Character();
		Character(const Character &copy);

		Character &operator=(const Character &replace);

		void recoverAP();
		void equip(AWeapon *weapon);
        /* attack the enemy  */
		void attack(Enemy *enemy);

		AWeapon *getWeapon() const;
		int getAP() const;
		std::string getName() const;

	private:
		int 		_ap;
		std::string _name;
        /* weapon uit aWeapon */
		AWeapon		*_my_weapon;
       

} ;

std::ostream &operator<<(std::ostream &out, Character const &character);


