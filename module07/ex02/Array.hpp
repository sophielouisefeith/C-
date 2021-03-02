/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:23:40 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/02 12:57:24 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>


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

template <class T>

class Array{
        typedef unsigned int size;


    public:

    Array();
    Array(size s);
    Array(const Array &array);
    /* deconstructor we delete  */
    ~Array() {
			delete[] _storage;
		}
    
    
}

#ifndef ARRAY_H	
#define ARRAY_H

#include <iostream>

template <typename T>

class Array{
	public:
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
		
		unsigned int size(void) const {return this->_size;}
		
		T& operator[](unsigned int i){
			if (!this->_array || i >= this->_size || i < 0)
				throw Array<T>::OutOfBounds();
			return this->_array[i];
		}
		
		class OutOfBounds : public std::exception{
			public:
				OutOfBounds() throw() {}
				~OutOfBounds() throw() {}
				OutOfBounds(const OutOfBounds&) throw() {}
				OutOfBounds &operator=(const OutOfBounds&) throw() {}
				const char *what() const throw() {return "Input is out of bounds.";}
		} ;
	private:
		unsigned int _size;
		T *_array;
} ;

#endif