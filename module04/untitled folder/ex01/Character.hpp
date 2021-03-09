/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:53:02 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:59:35 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
	public:
		Character();
		Character(const std::string &name);
		~Character();
		Character(const Character &copy);

		Character &operator=(const Character &current);

		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);

		AWeapon *getWeapon() const;
		int getAP() const;
		std::string getName() const;

	private:
		int 		_ap;
		std::string _name;
		AWeapon		*_my_weapon;

} ;



std::ostream &operator<<(std::ostream &out, Character const &character);

#endif