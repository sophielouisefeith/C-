/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 10:56:06 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:37:17 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer{
	public:
		Sorcerer(const std::string name, const std::string title);
		~Sorcerer();
		Sorcerer();
		Sorcerer(const Sorcerer &copy);

		Sorcerer &operator=(const Sorcerer &current);

		std::string get_name(void) const;
		std::string get_title(void) const;
		void polymorph(Victim const &victim);
	private:
		std::string _name;
		std::string _title;
} ;

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
