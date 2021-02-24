/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serialization.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 12:36:00 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/23 14:34:23 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip> // fixed, setprecision
#include <cctype> // isprint
#include <cmath> // isinf, isnan
#include <sstream> // stringstream
#include <iomanip> // fixed, setprecision

# define RESET			"\033[0m"
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define BWHITE  	    "\033[1m\033[37m"      /* Bold White */
# define BBLACK   	    "\033[1m\033[30m"      /* Bold Black */


/* Write a function "void * serialize(void);". This function will return the address
on the heap of a sequence of bytes that represent a piece of serialized data. The serialized
data is the concatenation of a random array of 8 alphanumerical characters, a random
integer and a second random array of 8 alphanumerical characters. Feel free to use anything you like to generate the random values.*/

                /*object */
                /* bytes */
        /*Database    memory    file  */


struct Data { 
    std::string s1; 
    int n; 
    std::string s2;
    void * serialization(void);
    Data * deserialize(void * raw);


    
};

  