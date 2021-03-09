/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 20:59:37 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 14:08:07 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SXQUAD_HPP
# define SXQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad {
	public:
		Squad();
		virtual ~Squad();
		Squad(const Squad &copy);

		Squad &operator=(const Squad &current);

		int getCount() const;
		ISpaceMarine* getUnit(int n) const; 
		int push(ISpaceMarine* unit);

	private:
		int _count;
		ISpaceMarine **_units;
} ;

#endif
