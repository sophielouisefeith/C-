/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NoSpan.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:46:22 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 17:30:05 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::NoSpan::NoSpan() throw() {}
Span::NoSpan::~NoSpan() throw() {}

Span::NoSpan::NoSpan(const NoSpan &) throw() {}
Span::NoSpan &Span::NoSpan::operator=(const NoSpan &) throw() {
	return *this;
}

const char* Span::NoSpan::what() const throw() {
	return ("There are not enough numbers in this container to calculate the span.");
}