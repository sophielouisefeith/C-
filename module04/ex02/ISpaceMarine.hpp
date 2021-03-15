/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 14:37:46 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 12:02:28 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>


/*  dus deze is er eigenlijk voor de functies. */
/* interface classes */ 


class ISpaceMarine
{
public:
virtual ~ISpaceMarine() {}
virtual ISpaceMarine* clone() const = 0;
virtual void battleCry() const = 0;
virtual void rangedAttack() const = 0;
virtual void meleeAttack() const = 0;
};