/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:41:06 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 17:14:20 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <list>
#include "Color.hpp"

/*The Containers library is a generic collection of class 
templates and algorithms that allow programmers to easily implement 
common data structures like queues, lists and stacks. There are three 
classes of containers -- sequence containers, associative containers, 
and unordered associative containers -- each of which is designed to support a different set of operations.

The container manages the storage space that is allocated for its elements and 
provides member functions to access them, either directly or through iterators 
(objects with properties similar to pointers).

Most containers have at least several member functions in common, and share functionalities.
 Which container is the best for the particular application depends not only on the offered 
 functionality, but also on its efficiency for different workloads. */


 
class NoRange : public std::exception{
	public:
		NoRange() throw () {};
		~NoRange() throw() {};
		NoRange(const NoRange &) throw() {};
		NoRange &operator=(const NoRange &) throw() {return *this;}
		const char *what() const throw(){
			return ("The given number doesn't occure in this container.");
		}
} ;

template <typename T>
void easyfind(T &container, int i)
{
	std::list<int>::const_iterator it = container.begin();
	std::list<int>::const_iterator ite = container.end();
	int j = 0;
	/* we loop through the container  */
	while (it != ite){
		if (*it == i)
			break;
		it++;
		j++;
	}
	if (it == ite)
		throw NoRange();
	else
		std::cout << "The first occurence of " << i << " is at index: " << j << "." << std::endl;
	return ;
}