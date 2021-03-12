/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Charachter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 15:05:44 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 15:05:54 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

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