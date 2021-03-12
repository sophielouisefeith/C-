/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 11:45:03 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 14:44:46 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine(const TacticalMarine &copy);

		TacticalMarine &operator=(const TacticalMarine &replace);

		ISpaceMarine* clone() const; 
		void battleCry() const; 
		void rangedAttack() const;
		void meleeAttack() const;
} ;