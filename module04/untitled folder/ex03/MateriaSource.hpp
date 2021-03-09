/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:00:09 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:57:03 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource;

class MateriaSource : public IMateriaSource{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource &);

		void learnMateria(AMateria *amateria);
		AMateria *createMateria(const std::string &type);
	private:
		AMateria *_temp[4];
} ;

#endif
