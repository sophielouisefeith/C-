/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:00:02 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 10:16:50 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ICHARACTER_HPP
# define ICHARACTER_HPP	

#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0; 
		virtual void equip(AMateria* m) = 0;
		virtual void un_equip(int idx) = 0;
		virtual void use(int i, ICharacter &target) = 0;
};

#endif
