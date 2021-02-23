/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 15:29:55 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/23 15:40:18 by sfeith        ########   odam.nl         */
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



class Base { public: virtual ~Base() {} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

    

