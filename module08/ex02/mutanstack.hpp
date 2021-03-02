/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutanstack.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:48:54 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 14:48:56 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {};
		MutantStack<T>(const MutantStack<T> &copy);
		~MutantStack() {};
		MutantStack<T> &operator=(const MutantStack<T> &current);

		//creating a typedef variable named iterator for the stack container while creating access for it to the iterator functions
		typedef typename std::stack<T>::container_type::iterator iterator;

		//c is a reference to the underlying container
		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
} ;

#endif