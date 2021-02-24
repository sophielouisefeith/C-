/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 13:16:57 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/24 15:08:20 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include <iostream>

class   Awesome 
{
public:
	Awesome( int n ) : _n( n ) {}
	bool	operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool	operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool	operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool	operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool	operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool	operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	void	print_n(void) { std::cout << this->_n << std::endl; }
	int		get_n(void) const { return (this->_n); }
private:
	int _n;
};

template<typename I> void display(I &el){
    std::cout<<el;
} //defining a template 


template<typename I> void iter(I *array,  size_t len ,  void (*f)(I &elt)){
    
    for (size_t i=0; i < len; i++) 
		(*f)(array[i]);
	
    return ;
}



//const and not const. 
