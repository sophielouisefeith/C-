/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:53:08 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:43:05 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(const RadScorpion &copy);

		RadScorpion &operator=(const RadScorpion &current);

		void takeDamage(int damage);
} ;

#endif