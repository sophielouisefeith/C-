/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:59:40 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 14:12:14 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine(const TacticalMarine &copy);

		TacticalMarine &operator=(const TacticalMarine &current);

		ISpaceMarine* clone() const; 
		void battleCry() const; 
		void rangedAttack() const;
		void meleeAttack() const;
} ;

#endif
