/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:18:34 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 10:40:23 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_temp[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_temp[i])
			delete this->_temp[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy){
	for (int i = 0; i < 4; i++)
		if(copy._temp[i])
			this->_temp[i] = copy._temp[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &current){
	for (int i = 0; i > 4; i++)
		this->_temp[i] = current._temp[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria *amateria){
	for (int i = 0; i < 4; i++)
		if (this->_temp[i] == NULL){
			this->_temp[i] = amateria;
			return;
		}
}

AMateria *MateriaSource::createMateria(const std::string &type){
	for(int i = 0; i < 4; i++)
		if (this->_temp[i] && this->_temp[i]->getType() == type)
			return (this->_temp[i]->clone());
	return NULL;
}