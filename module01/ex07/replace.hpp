/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 14:44:59 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/01 20:19:53 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include "Color.hpp"

bool new_file(const std::string file_name, std::string &buffer);
bool replace_string(const std::string file_name, std::string &buffer, const std::string s1, const std::string s2);	//perse &?
bool prepare(const std::string file_name, const std::string s1, const std::string s2);		//reference zodat ze niet leeg zijn