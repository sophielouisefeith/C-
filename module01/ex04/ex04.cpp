/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:40:35 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/25 16:45:36 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main( void ) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *pointer_str = &str;
	std::string &reference_str = str;

	std::cout << "display the pointer :" << *pointer_str << std::endl;
	std::cout << "display the reference :"<< reference_str << std::endl;
	return (0);
}