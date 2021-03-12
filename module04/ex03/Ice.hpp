/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 15:10:18 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 15:10:37 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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