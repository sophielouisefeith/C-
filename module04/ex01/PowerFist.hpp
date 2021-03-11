/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:40:07 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 14:56:33 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "AWeapon.hpp"

class PowerFist : public AWeapon{
    public:
        /*constructor */
        PowerFist();
        /* we use virtual we need to do this there is a higher class */
        virtual ~PowerFist();
        /* copy constructor  */
        PowerFist(const PowerFist &copy);
        /* we use the operator to replace the current */
		PowerFist &operator=(const PowerFist &replace);
        /* this function comes from Aweapon there it is virtual */
		void attack() const;
} ;