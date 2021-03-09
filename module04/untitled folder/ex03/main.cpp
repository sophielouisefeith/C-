/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 21:09:09 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:02:22 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() 
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* zaz = new Character("zaz");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);

	ICharacter* bob = new Character("bob");
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	zaz->use(2, *bob);
	zaz->use(3, *bob);
	zaz->use(2, *bob);
	zaz->use(7, *bob);

	delete bob;
	delete zaz;
	delete src;

	return 0;
}