/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 12:42:46 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 11:11:25 by sfeith        ########   odam.nl         */
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


template <typename S>
    void swap(S &x, S &y) {
    S temp;
    temp = x;
    x = y;
    y = temp;
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

