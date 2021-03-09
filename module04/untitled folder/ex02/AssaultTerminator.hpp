/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:03:12 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:52:29 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

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

#endif
