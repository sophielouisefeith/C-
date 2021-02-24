/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 10:42:44 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/23 12:31:59 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// /* #pragma once is a non-standard but widely supported preprocessor 
// /*directive designed to cause the current source file 
// /*to be included only once in a single compilation#pragma once
// /* notes from video.
// /*ther is a hyragy between types, restriction to go from one to another void type will alow us to store a sddress from any type 
// /*& of the float  
// //
// /*float  a = 420.042f                         reference value 
// /*void * b = &a;                              implicite reinterpetation cast
// /*void * c = (void *) &a;                     explicit reinterpation cast
// /*void * d = &a                               implicita tepreation 
// */

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


class Convert{  

    public:
    
        Convert();
        
        Convert(std::string const &output);  //output
        /*copyconstructor */
        Convert(const Convert& copy);
        Convert & operator=(Convert const  & rsh);
        
        ~Convert();

        std::string       GetOutput() const;
        Convert* toChar();
        //void treat_char(c)
        Convert* toInt();
        //treat_Int(c);
        Convert* toDouble();
        //treat_Double(c);
        Convert* toFloat();
       // treat_Float(c);
        
        
        
    private:
    
        std::string _output;
    
};