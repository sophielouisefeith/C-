/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 11:18:48 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/14 14:58:39 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
# include <iostream>

Pony::Pony( void ) {
	return;
}

Pony::~Pony( void ) {
	return;
}

Pony::Pony(std::string SoundName, int ColorCode ) : _SoundName(SoundName), _ColorCode(ColorCode)
{
    std::cout << " •Sounds like a " << _SoundName << std::endl; 
    std::cout << " •and the color  code of the skin is  "<< _ColorCode << "RGB" << std::endl;
}


std::string Pony::GetSoundName() const {
    return this->_SoundName;
}

void Pony::Sound(void){

    std::cout << BOLDBLACK<<"Violet" << RESET << std::endl;
    
}

int     Pony::GetColorCode() const{
    return this->_ColorCode;
}

void Pony::Colortype(void){

    std::cout << GREY << "Grey" << RESET << std::endl;
    
}