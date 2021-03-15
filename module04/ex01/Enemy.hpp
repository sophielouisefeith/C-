/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:39:51 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 13:43:47 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Enemy{
    private:
    std::string     _type;
    int             _hp;
    
public:
    Enemy();
    Enemy(int hp, std::string const & type);
    virtual ~Enemy(); /* hoeft*/
    Enemy(const Enemy &copy);
    Enemy &operator=(const Enemy &replace);
    
    std::string getType() const;
    int getHP() const;
    /* we need take damage also for other classes wait till thats all be done
    therefore the virutal  */
    virtual void takeDamage(int);
};
