/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 14:42:39 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 15:00:16 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    public:
        HumanA();
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        std::string GetName(void);
        void        setName(std::string ReName);
        void        attack(void);
    private:
        Weapon&   _Weapon;
        std::string _name;

   
    
};

#endif