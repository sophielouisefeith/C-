/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Mutanstack.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:48:36 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/08 13:43:40 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Mutanstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>(copy) {
	*this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &current){
	std::stack<T>::operator=(current);
	return *this;
}