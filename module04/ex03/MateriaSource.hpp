/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 15:06:40 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 15:06:42 by sfeith        ########   odam.nl         */
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