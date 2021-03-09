/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:26:26 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 12:41:33 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim{
	public:
		Peon(const std::string &name);
		Peon(const Peon &copy);
		virtual ~Peon();
		Peon &operator=(const Peon &current);

		void getPolymorphed(void) const;
} ;
#endif