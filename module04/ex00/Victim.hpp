/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 15:09:25 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/11 17:41:10 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

# define RESET			"\033[0m"
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define BWHITE  	    "\033[1m\033[37m"      /* Bold White */
# define BBLACK   	    "\033[1m\033[30m"      /* Bold Black */
    

class  Victim {

protected:

	std::string		_name;

public:

    Victim();
    Victim(std::string const & name = " Victim");
	~Victim();
	Victim(Victim const & src);
	Victim & operator=(Victim const & rhs);

	std::string 	getName() const;
	std::string 	getTitle() const;

    void            getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, Victim const & Victim);
