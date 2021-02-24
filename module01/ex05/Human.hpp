/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 18:06:01 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 10:48:55 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

#include <iostream>

class Human
{
public:
    Human();
    ~Human();
    const Brain    &getBrain();
    const Brain*    identify() const;
private:
    const Brain _brain;
};

#endif