/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:53:07 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/02 13:41:17 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon{
	public:
		PowerFist();
		virtual ~PowerFist();
		PowerFist(const PowerFist &copy);

		PowerFist &operator=(const PowerFist &current);
		
		void attack() const;
} ;

#endif
