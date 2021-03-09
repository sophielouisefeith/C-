/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:50:48 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:55:28 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad {
public:	
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0; 
	virtual int push(ISpaceMarine*) = 0;
} ;

#endif