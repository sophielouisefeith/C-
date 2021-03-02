/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FullContainer.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:45:55 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 17:27:26 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::FullContainer::FullContainer() throw() {}
Span::FullContainer::~FullContainer() throw() {}

Span::FullContainer::FullContainer(const FullContainer &) throw() {}
Span::FullContainer &Span::FullContainer::operator=(const FullContainer &) throw() {
	return *this;
}

const char* Span::FullContainer::what() const throw() {
	return ("The container is full, you can't add any new numbers.");
}