/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 15:01:31 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 15:03:45 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure &copy);

		Cure &operator=(const Cure &);
		AMateria *clone() const;
		void use(ICharacter &target);
} ;

#endif
