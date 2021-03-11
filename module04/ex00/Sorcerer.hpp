#/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 13:47:21 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/11 17:45:18 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

# define RESET			"\033[0m"
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define BWHITE  	    "\033[1m\033[37m"      /* Bold White */
# define BBLACK   	    "\033[1m\033[30m"      /* Bold Black */
    


 /*        sorcerer       */   
 /*        victim         */
 /*    peon   |           */

class Sorcerer {

private:

	std::string		_name;
	std::string 	_title;

public:

    Sorcerer();
    Sorcerer(std::string const & name, std::string const & title);
	~Sorcerer();
	Sorcerer(Sorcerer const & src);
	Sorcerer & operator=(Sorcerer const & rhs);

	std::string 	getName() const;
	std::string 	getTitle() const;
    void            polymorph(Victim const &victim);
   	//virtual void	polymorph(Peon const &peon);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & sorcerer);

