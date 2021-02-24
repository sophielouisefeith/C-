/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 18:06:04 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 10:53:59 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"



Human::Human( void ){
    return;
}

Human::~Human( void ){
    return;
} 


const Brain&        Human::getBrain(void){    // &you will get the address
    return (this->_brain);
}

const Brain*     Human::identify() const{
    return (this->_brain.identify());
}