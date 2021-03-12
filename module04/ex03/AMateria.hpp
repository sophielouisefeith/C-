/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 14:42:02 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 15:15:07 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "ICharacter.hpp"

class AMateria 
{
private:
    std::string _type;
    
    unsigned int _xp;
public:
    AMateria(std::string const & type);
    AMateria();
    virtual ~AMateria();
    AMateria(const AMateria &copy);

	AMateria &operator=(const AMateria &replace);   

    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    
};

