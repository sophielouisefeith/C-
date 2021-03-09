/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:52:19 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/08/27 13:41:30 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0; 
		virtual void battleCry() const = 0; 
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
} ;

#endif