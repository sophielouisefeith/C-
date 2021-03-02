/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 14:42:48 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/01 20:23:49 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout <<YELLOW <<" 3 arguments required " << RESET << std::endl ;
		return (-1);
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (prepare(filename, s1, s2) == false)
		return (-1);
	return (0);
}