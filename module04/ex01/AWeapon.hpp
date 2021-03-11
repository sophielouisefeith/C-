/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:41 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 12:14:55 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class AWeapon
{
    private:
      std::string  _name;
      int          _apcost;
      int          _damage;
        
    public:
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon();
        std::string virtual  getName() const;
        int getAPCost() const;
        int getDamage() const;
        /*copyconstructor */
        AWeapon(const AWeapon &copy);
        /* operator? */
        /* replace from the current value  */
        AWeapon 	&operator=(const AWeapon &replace);
       virtual void attack() const = 0;
};