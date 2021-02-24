/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 13:16:57 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/24 14:45:02 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include <iostream>

template<typename I> void display(I &el){
    std::cout<<el;
} //defining a template 


template<typename I> void iter(I *array,  size_t len ,  void (*f)(I &elt)){
    
    for (size_t i=0; i < len; i++) 
		(*f)(array[i]);
	
    return ;
}




