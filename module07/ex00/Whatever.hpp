/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 12:42:46 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/24 13:16:18 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include <iostream>

template<typename T> //defining a template 

T max(T const & x, T const &  y){
    return(x >= y ? x : y);
}

template<typename M> //defining a template 

M min(M const & x, M const &  y){
    return(x <= y ? x : y);
}


