/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 18:06:11 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 10:59:01 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//*constructor here we can give value to different elements
//

//*deconstructor once we have malloced 

const Brain* Brain::identify() const {

	return this;
}

Brain::Brain(void){
    
    std::cout << BOLDBLUE << "We created the brain of human violet" << RESET << std::endl;
    this->_left =   true;
    this->_neuron = 500;
    
}

Brain::~Brain(void){
    std::cout << BOLDBLUE << "Brain has died" << std::endl;
    return;
}

std::string     Brain::getleft(void) const{
    return this->_left;
}

int             Brain::getneuron(void)const{
    return this->_neuron;
}

void     Brain::setleft(std::string left){
    this->_left = left;
}

void             Brain::setneuron(int neuron){
    this->_neuron = neuron;
}

//* we call the function brain identify 
