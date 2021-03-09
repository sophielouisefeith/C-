/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:59:48 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:58:23 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  AMATARIA_HPP
# define AMATARIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	private: 
		std::string _type;
		unsigned int _xp;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const &type); 
		AMateria(const AMateria &copy);
	
		AMateria &operator=(const AMateria &);
		std::string const & getType() const; 
		unsigned int getXP() const; 
	
		virtual AMateria* clone() const = 0; 
		virtual void use(ICharacter& target);
} ;

#endif