/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 13:16:57 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/09 13:50:31 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


 #include <iostream>


template<typename I> void iter(I *array,  size_t len ,  void (*f)(I const &el)){
    
    for (size_t i=0; i < len; i++) 
		(*f)(array[i]);
	
    return ;
}


//const and not const. 


class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;

	
};



