/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:53:10 by merelmourik   #+#    #+#                 */
/*   Updated: 2021/01/03 12:29:03 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon{
	public:
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(const AWeapon &copy);

		int 		getAPCost() const;
		int 		getDamage() const;
		std::string getName () const;
		
		AWeapon 	&operator=(const AWeapon &current);
		virtual void attack() const = 0;
	private:
		std::string _name;
		int			_damage;
		int			_apcost;
} ;

#endif