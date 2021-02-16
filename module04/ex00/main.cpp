/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 15:02:35 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/11 17:46:52 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main(void){

    std::cout << BWHITE <<  " FIRST PART EXSERCISE " << RESET << std::endl;
    std::cout << BWHITE <<  " ******************** " << RESET << std::endl;
    std::cout << BWHITE <<  " ******************** " << RESET << std::endl;
    std::cout << BBLACK <<  " Sorcerer, we give you a name and title " << RESET << std::endl;     
    std::cout << BWHITE <<  " ******************** " << RESET << std::endl;
    /* give the sorcerer a name and title */

    
    Sorcerer robert("Robert","the Magnificent");

    Victim jim("Jimmy");
    
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    // robert.polymorph(joe);

    
    return 0;

    
}