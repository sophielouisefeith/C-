/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 12:42:46 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/09 13:29:17 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include <iostream>

/*//defining a template  */

template<typename T> 

T max(T const & x, T const &  y){
    return(x >= y ? x : y);
}

template<typename M> 

M min(M const & x, M const &  y){
    return(x <= y ? x : y);
}

/* ********************************************************************************************************
***************************************this is out the evalsheet****************************************** */

class Awesome {
public:
    int _n;
Awesome( int n ) : _n( n ) {}
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
private:
//int _n;
};

