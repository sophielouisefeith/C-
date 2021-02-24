/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:11:40 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/21 13:14:18 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{

    std::string*  panther = new std::string("string panther");
    std::cout << *panther << std::endl;
    delete panther;
    
}