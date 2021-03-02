/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:23:40 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/02 13:53:04 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Color.hpp"

/* 
• Construction with no parameter: creates an empty array.
• Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then
display *a.)
• Construction by copy and assignment operator. In both cases, modifying one of
the two arrays after copy/assignment won’t affect anything in the other array.
• You MUST use the operator new[] for your allocation. You must not do preventive
allocation. Your code must never access non allocated memory.
• Elements are accessible through the operator[].
• When accessing an element with the operator[], if this element is out of the limits,
a std::exception is thrown.
• A member function size that returns the number of elements in the array. This
member function takes no parameter and does not modify the current instance in
any way */


#include <iostream>

template <typename T>

class Array{

    private:
		unsigned int _size;
		T *_array;
	public:
    /* empty array */
		Array<T>() : _size(0), _array(NULL) {}
		Array<T>(unsigned int n) : _size(n){
		_array = new T[n];
		}
		~Array<T>(){
			delete [] this->_array;
		}

		Array<T>(const Array<T> &copy){
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = copy._array[i];
			this->_size = copy._size;
		}


        
		Array<T> &operator=(const Array<T> &current){
			if (this == &current)
				return *this;
			delete [] this->_array;
			this->_size = current._size;
			for (int i = 0; i < current._size;)
				this->_array[i] = current._array[i];
			return *this;
		}
		
        
		unsigned int size(void) const 
        {return this->_size;}
		
		T& operator[](unsigned int i){
			if (!this->_array || i >= this->_size || i < 0)
				throw Array<T>::NotCorrect();
			return this->_array[i];
		}
		

        /* error class  */
		class NotCorrect: public std::exception{
			public:
				NotCorrect() throw() {}
				~NotCorrect() throw() {}
				NotCorrect(const NotCorrect&) throw() {}
				NotCorrect&operator=(const NotCorrect&) throw() {}
				const char *what() const throw() {return "the input is not correct";}
		} ;
	
} ;

