/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 17:04:24 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/09 15:16:24 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

/* start colonial */

/*constructor */

Peon::Peon(): Victim("peon"){
    
    std::cout << BLUE << " Zog Zogog" << std::endl;
    return;
}

/* waarom word dit nou nog een x herhaald */

Peon::Peon(const std::string &name) : Victim(name){
	std::cout << BLUE << "Zog Zog." << RESET << std::endl;
}


/*  copy operator */



Peon::Peon(const Peon &src) : Victim(src) {
    
    std::cout << YELLOW 
    << " Copy constructor is called ----- Peon a vicim" 
    << RESET <<  std::endl;
    *this = src;
}

/* operator called with a loop */


Peon &Peon::operator=(const Peon &rsh){
    
    std::cout << YELLOW << " Assignation is called ----- peon" << RESET << std::endl;
    if(this != &rsh){  // if rsh is not filled 
        this->_name = rsh.getName();  // why the . we fill the right side . with the result of getName
    }
    
    return *this;
}



/* deconstructor */

Peon::~Peon(){
    

    std::cout << BLUE << " Bleuark" << std::endl;
    return;
}


void    Peon::Getpolymorphed(void)const{
    std::cout << YELLOW<< this->getName() << " has been turned into a pink pony (polymorphezed)" << RESET << std::endl;
    
}