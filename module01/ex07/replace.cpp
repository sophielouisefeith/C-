/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 14:39:08 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/01 20:22:49 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>
#include <fstream>
#include <sstream>


/* buffer contains the string format */

bool new_file(const std::string file_name, std::string &buffer)
{
	std::ofstream of(file_name + ".replace");
	if (!of.good())
	{
		std::cout<< YELLOW << "Error cant open the file" << RESET << std::endl ;
		return (false);			
	}
	of << buffer;
	of.close();
	return(true); 
}

bool replace_string(const std::string file_name, std::string &buffer, const std::string s1, const std::string s2)	//perse &?
{
    size_t pos = 0;
    while ((pos = buffer.find(s1, pos)) != std::string::npos) 
	{
         buffer.replace(pos, s1.length(), s2);
         pos += s2.length();
    }
	if (new_file(file_name, buffer))
		return (false);
	return (true);
}

bool prepare(const std::string file_name, const std::string s1, const std::string s2)		//reference zodat ze niet leeg zijn
{
	std::ifstream file(file_name);
	std::stringstream loading;
	std::string buffer;
	if (!file.good())
	{
		std::cout << RED << "Error can't open the file." << RESET << std::endl ;
		return (false);	
	}
	if (s1.empty() || s2.empty())
	{
		std::cout << RED <<  "file in !  input string cant be empty" << RESET <<std::endl ;
		return (false);
	}
	loading << file.rdbuf();
	buffer = loading.str();	
	if (replace_string(file_name, buffer, s1, s2))
		return (false);
	return (true);
}
