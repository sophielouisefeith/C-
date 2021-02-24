/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 10:59:56 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/19 13:51:02 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main(int ac, char **av) {


    std::cout << BWHITE <<  "•••••FIRST PART EXSERCISE••••• " << RESET << std::endl;
    
    //Convert Convert("hallo"); //this is the input we will convert;
    // hij moet het van de standart input lezen.
    
   // converter.toChar();
    if (ac == 2) {
        Convert convert(av[1]);
        convert.toChar()->toInt()->toDouble()->toFloat();
    } else if (ac > 2) std::cerr << "Too many arguments" << std::endl;
    else std::cerr << "Run program with single arguments" << std::endl;
    return 0;
}


    