/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:46:40 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 17:32:06 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include "list"

Span::Span() {}
Span::Span(unsigned int N) : _N(N), _index(0){
	this->_container.reserve(N);
}

Span::~Span() {}

Span::Span(const Span &copy){
	*this = copy;
}

Span &Span::operator=(const Span &current){
	if (this == &current)
		return *this;
	this->_container = current._container;
	this->_index = current._index;
	this->_N = current._N;
	return *this;
}

void Span::addNumber(const unsigned int N){
	if (this->_index < this->_N)
	{
		this->_container.push_back(N);
		this->_index++;
		return;
	}
	throw Span::FullContainer();
}

void Span::showContainer() const{
	std::vector<int>::const_iterator it = this->_container.begin();
	std::vector<int>::const_iterator ite = this->_container.end();
	while (it != ite){
		std::cout << *it << std::endl;
		it++;
	}
}

unsigned int Span::shortestSpan() const{
	if (this->_index < 2)
		throw NoSpan();
	std::vector<int>::const_iterator it1 = this->_container.begin();
	std::vector<int>::const_iterator it2;
	std::vector<int>::const_iterator next;
	int range = INT_MAX;
	int temp = INT_MAX;
	while (it1 < this->_container.end())
	{
		it2 = this->_container.begin();
		for (; it2 < this->_container.end(); it2++){
			next = it2 + 1;
			if (*it2 == *next){
				range = 0;
				continue;
			}
			if (*it2 < *next ? temp = *next - *it2 : temp = *it2 - *next)
			if (temp < range || temp == 0)
				range = temp;
		}
		it1++;
	}
	return range;
}

unsigned int Span::longestSpan() const {
	if (this->_index < 2)
		throw NoSpan();
	int min = *min_element(this->_container.begin(), this->_container.end());
	int max = *max_element(this->_container.begin(), this->_container.end());
	return (max - min);
}