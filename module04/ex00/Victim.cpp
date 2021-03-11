/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 15:34:01 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/09 15:29:51 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Peon.hpp"

/* start colonial */

/*constructor */

Victim::Victim(){
    
    std::cout << BLUE << " The victim is born " << std::endl;
    return;
}


Victim::Victim(std::string name):_name(name){

    std::cout << BLUE << "Some random victom called " << this->getName() << " just appeard" <<  RESET << std::endl;  
}

Victim::Victim(const Victim &src) {
    
    std::cout << YELLOW 
    << " Copy constructor is called ----- Victim" 
    << RESET <<  std::endl;
    *this = src;
}

/* operator called with a loop */


Victim &Victim::operator=(const Victim &rsh){
    
    std::cout << YELLOW << " Assignation is called ----- Victim" << RESET << std::endl;
    if(this != &rsh){  // if rsh is not filled 
        this->_name = rsh.getName();  // why the . we fill the right side . with the result of getName
    }
    
    return *this;
}

/* deconstructor */

Victim::~Victim(){
    
    std::cout << BLUE << "Victim "  << this->getName() << "just died for no apparent reason" << std::endl;
    return;
}

/* end colonial */

/* getters */
std::string     Victim::getName() const{
    
    return this->_name;
     
}


/* the sorcerer has to introduce himself. */
std::ostream &operator<<(std::ostream &o, const Victim &victim) {

    o << YELLOW << " I am" 
    << victim.getName() 
    << ", and i like otters" << RESET << std::endl;
    return o;
}

/*  the Victim is been polymorphed by the sorcerer */

void    Victim::getpolymorphed(void)const{
    
    std::cout << YELLOW<< this->getName() << " has been turned into a cute little sheep" << RESET << std::endl;
    
}
