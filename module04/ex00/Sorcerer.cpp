/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 13:46:55 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/09 15:27:47 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


/* start colonical */

/*  constructor */
Sorcerer ::Sorcerer(){
    return;
}

/* the sorcerer is born */
Sorcerer::Sorcerer(std::string const &name, std::string const &title): 
_name(name),_title(title){
    
    std::cout << YELLOW << this->getName()
    << " , " << this->getTitle() 
    << " , is born! " << RESET  <<std::endl;
  
}

/* we call the copy constructor */

Sorcerer::Sorcerer(const Sorcerer &src) {
    
    std::cout << YELLOW 
    << " Copy constructor is called ----- Sorcerer" 
    << RESET <<  std::endl;
    *this = src;
}

/* operator called with a loop */


Sorcerer &Sorcerer::operator=(const Sorcerer &rsh){
    
    std::cout << YELLOW << " Assignation is called ----- Sorcerer" << RESET << std::endl;
    if(this != &rsh){  // if rsh is not filled
        return *this;
    this->_name = rsh._name;  // why the . we fill the right side . with the result of getName
    this->_title = rsh._title;
    }
    
    return *this;
}

/* Deconstructor her the sorcerer will die */

Sorcerer::~Sorcerer(){
    
    std::cout << YELLOW << this->getName() << " , " << this->getTitle() << ", is dead.  Consequences will never be the same! " RESET  <<std::endl;
    return ;
}

/* end colonial */


void Sorcerer::polymorph(Victim const &victim){
	victim.getpolymorphed();
}

// void Sorcerer::polymorph(Peon const &peon){
// 	peon.getPolymorphed();
// }


/* getters */
std::string     Sorcerer::getName() const{
    
    return this->_name;
    
}

std::string Sorcerer::getTitle() const {
    
    return this->_title;
}

/* the sorcerer has to introduce himself. */
std::ostream &operator<<(std::ostream &o, const Sorcerer &sorcerer) {

    o << YELLOW << " I am" 
    << sorcerer.getName() 
    << ", " << sorcerer.getTitle() 
    << ", and i like ponies" << RESET << std::endl;
    return o;
}

