/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:59:52 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 10:16:22 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character(const std::string &name);
		~Character();
		Character(const Character &copy);
		Character &operator=(const Character &);

		std::string const &getName() const;
		void equip(AMateria *amateria);
		void un_equip(int i);
		void use(int i, ICharacter &target);
	private:
		std::string _name;
		AMateria* _invent[4];
} ;

#endif
