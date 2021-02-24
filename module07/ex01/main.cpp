/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 13:31:57 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/24 15:18:56 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"


int main(void){


    char array[4]= "hal";
    ::iter(array, 5, &display);
    std::cout << std::endl;
    std::string	f[8] = {"Hello", "World", "Nice", "To", "Meet", "You", "In", "Here"};
    ::iter(f, 5, &display);
    std::cout << std::endl;

    Awesome(6);
    return 0;
    
}