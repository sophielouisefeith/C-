/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:18:14 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:59:46 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _units(NULL) {}

Squad::~Squad() {
	if (this->_units)
	{
		for (int i = 0 ; i <= this->_count ; i++)
			delete this->_units[i];
		delete this->_units;
	}
}

Squad::Squad(const Squad &copy)  : _count(0), _units(NULL) {
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
}

Squad &Squad::operator=(const Squad &current) {
	if (this != &current){
		if (this->_units){
			for (int i = 0 ; i <= this->_count ; i++)
				delete this->_units[i];
			delete this->_units;
		}
		for (int i = 0; i < this->_count; i++){
			push(current.getUnit(i));
		}
		this->_count = current._count;
	}
	return *this;
}

int Squad::getCount() const {
	return this->_count;
}

ISpaceMarine *Squad::getUnit(int n) const {
	if (n < 0 || n >= this->_count || this->_count == 0)
		return (NULL);
	return (this->_units[n]);
}

int Squad::push(ISpaceMarine* unit) {
	if (!unit)
		return this->_count;
	if (this->_units)
	{
		for (int i = 0; i < this->_count; i++)
			if (this->_units[i] == unit)
				return (this->_count);
		ISpaceMarine **copy = new ISpaceMarine*[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			copy[i] = this->_units[i];
		delete this->_units;
		this->_units = copy;
		this->_units[this->_count] = unit;
		this->_count++;
	}
	else
	{
		this->_units = new ISpaceMarine*[1];
		this->_units[0] = unit;
		this->_count = 1;
	}
	return (this->_count);
}
	