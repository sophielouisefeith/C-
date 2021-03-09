/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:59:56 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 15:18:22 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CURE_HPP
# define CURE_HPP

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
