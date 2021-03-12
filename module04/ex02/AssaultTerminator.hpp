/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 14:38:02 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 11:54:12 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &copy);

		AssaultTerminator &operator=(const AssaultTerminator &current);

		ISpaceMarine* clone() const; 
		void battleCry() const; 
		void rangedAttack() const;
		void meleeAttack() const;
} ;