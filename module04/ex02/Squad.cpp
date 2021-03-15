/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 11:52:30 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 14:31:19 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _units(NULL) {}

Squad::~Squad() {
	/* here we delete te squads and units in order */
	if (this->_units)
	{
		for (int i = 0 ; i <= this->_count ; i++)
			delete this->_units[i];
		delete this->_units;
	}
}

Squad::Squad(const Squad &copy)  : _count(0), _units(NULL) {
	// we zitten nu in de spacemarine units af van welke unit == i -> en 
	// squad units -> assault 
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
		/* push on the front of the stack  */
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


/* • push(XXX) adds the XXX unit to the end of the squad. Returns the number of
units in the squad after the operation (Adding a null unit, or an unit already in the
squad, make no sense at all, of course...)*/



int Squad::push(ISpaceMarine* unit) {
	/* here we create the units  */
	if (!unit) //geen nieuwe mensen ip het feestje  
		return this->_count;
	if (this->_units) // mensen op het feestje zijn  genenn op het feeestje er al is 
	{
		for (int i = 0; i < this->_count; i++)
			if (this->_units[i] == unit)
				return (this->_count);  // units type spacemarine, wie is er al return hoeveel mensen er zijn 
		ISpaceMarine **copy = new ISpaceMarine*[this->_count + 1]; // voeg iemand toe plus nog iemand.
		// new feestje met meer mensen 
		//kopier heel het feestje, units is waar je het feestje in opsla 
		for (int i = 0; i < this->_count; i++)
			copy[i] = this->_units[i];
		delete this->_units;  // moet je het ook deleten 
		// hier gaan we units opnieuw vullen met copy
		this->_units = copy;
		//this->_count++; 
		this->_units[this->_count] = unit; //laatste unit op het feestje toevoegen  je zet iets op de 7e plek maar de array telt vanaf nul 
		this->_count++; 
	}
	else
	{ 
		//als er nog niemand op het feestje is 
		std::cout << " nog niemand op het feest <<" << std::endl;
		this->_units = new ISpaceMarine*[1];
		this->_units[0] = unit;
		this->_count = 1;
	}
	return (this->_count); // hoeveel mensen er zijn 
}