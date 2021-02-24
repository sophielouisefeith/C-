/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 13:06:48 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 21:12:39 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"


class HumanB
{
    public:
        HumanB();
        HumanB(std::string name, Weapon &weapon);
        HumanB(std::string name);
        ~HumanB();
        void        setWeapon(Weapon &revalueType);
        Weapon*     GetWeapon(void);  
        std::string GetName(void);
        void        setName(std::string ReName);
        void        attack(void);
        
    
        
    private:
        Weapon*   _Weapon;
        std::string _name;

   
    
};

#endif