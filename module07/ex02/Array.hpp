/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:23:40 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 15:29:54 by sfeith        ########   odam.nl         */
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