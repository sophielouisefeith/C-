/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 15:09:25 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/09 15:28:22 by sfeith        ########   odam.nl         */
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
    
/* virtual he er is nog een code met het zelfde prototype  */
class  Victim {

protected:

	std::string		_name;

public:

    Victim();
   	Victim(const std::string name);
	virtual ~Victim();
	Victim(Victim const & src);
	Victim & operator=(Victim const & rhs);

	std::string 	getName() const;

    virtual void            getpolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, Victim const & Victim);
