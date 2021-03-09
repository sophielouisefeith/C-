/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:59:59 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 17:03:54 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice &copy);

		Ice &operator=(const Ice &current);

		AMateria *clone() const;
		void use(ICharacter &target);
} ;

#endif
