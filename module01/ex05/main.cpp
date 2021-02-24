/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 18:05:58 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/28 10:58:40 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int main()
{   

    Human       violet;
    
    std::cout << violet.identify() <<std::endl;
    std::cout << BOLDBLUE << "above we printed the brain's address in memory" << RESET << std::endl;
    std::cout << violet.getBrain().identify()<< std::endl; 
    std::cout << BOLDBLUE << "above we printed the brain's address in memory from the human class" << RESET << std::endl;
    return 0;
}