/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IsSquad.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 14:34:07 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 14:36:28 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include <iostream>


class ISquad
{
    public:
    virtual ~ISquad() {}
    /* returns the number of units currently in the squad. */
    virtual int getCount() const = 0;
    /* getUnit(N) returns a pointer to the Nth unit (Of course, we start at 0. Null
    pointer in case of out-of-bounds index.) */
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine*) = 0;

    private:
    
};