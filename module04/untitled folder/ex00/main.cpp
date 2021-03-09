/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:30:57 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:28:21 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Goat.hpp"

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Goat alfred("Alfred");

	std::cout << robert << jim << joe << alfred;
	robert.polymorph(jim); 
	robert.polymorph(joe);
	robert.polymorph(alfred);
	return 0; 
}
