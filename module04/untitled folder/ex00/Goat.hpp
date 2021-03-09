/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Goat.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:25:57 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:26:29 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOAT_HPP
# define GOAT_HPP

#include <iostream>
#include "Victim.hpp"

class Goat : public Victim{
	public:
		Goat(const std::string &name);
		Goat(const Goat &copy);
		virtual ~Goat();
		Goat &operator=(const Goat &current);

		void getPolymorphed(void) const;
} ;
#endif