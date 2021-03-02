/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 12:42:46 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/02 12:41:15 by sfeith        ########   odam.nl         */
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


