/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:10:29 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:35:43 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim{
	public:
		Victim(const std::string name);
		Victim(const Victim &copy);
		virtual ~Victim();

		Victim &operator=(const Victim &current);

		std::string get_name() const;
		
		virtual void getPolymorphed() const;
	private:
		std::string _name;
} ;

std::ostream    &operator<<(std::ostream &out, Victim &Victim);

#endif