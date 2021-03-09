/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:53:06 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 14:05:25 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);

		PlasmaRifle &operator=(const PlasmaRifle &current);

		void attack() const;
} ;

#endif
