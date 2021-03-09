/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 13:06:48 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/09 16:46:04 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"


class HumanB
{
    public:
        HumanB();
        HumanB(std::string name);
        HumanB(std::string name, Weapon &weapon);
        ~HumanB();
        void        setWeapon(Weapon &revalueType);
        Weapon*     GetWeapon(void);  
        std::string GetName(void);
        void        setName(std::string ReName);
        void        attack(void);
        
    
        
    private:
        Weapon*   _Weapon; // use a pointer we later get the weapon so no reference 
        std::string _name;

   
    
};

#endif