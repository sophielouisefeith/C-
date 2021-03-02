/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:46:55 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 14:46:57 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector> 
#include <iterator> 

#define ITERATOR 8

class Span{
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &current);
		void addNumber(const unsigned int i);
		void showContainer() const;
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		class FullContainer : public std::exception{
			public:
				FullContainer() throw();
				~FullContainer() throw();
				FullContainer(const FullContainer &) throw();
				FullContainer &operator=(const FullContainer &) throw();
				const char *what() const throw();
		} ;
		class NoSpan : public std::exception{
			public:
				NoSpan() throw();
				~NoSpan() throw();
				NoSpan(const NoSpan &) throw();
				NoSpan &operator=(const NoSpan &) throw();
				const char *what() const throw();
		} ;

	private:
		unsigned int _N;
		std::vector<int> _container;
		unsigned int _index;
} ;

#endif