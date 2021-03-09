/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:53:12 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 14:07:24 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant(const SuperMutant &copy);

		SuperMutant &operator=(const SuperMutant &current);

		void takeDamage(int damage);
} ;

#endif