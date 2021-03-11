/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 17:04:27 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/09 15:19:34 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Victim.hpp"


# define RESET			"\033[0m"
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define BWHITE  	    "\033[1m\033[37m"      /* Bold White */
# define BBLACK   	    "\033[1m\033[30m"      /* Bold Black */
    


 /*        Sorcerer       */   
 /*        victim         */
 /*    peon   |           */

class Peon :  public Victim {

public:

    Peon();
    Peon(std::string const & name);
	virtual ~Peon();
	Peon(Peon const & src);
	Peon & operator=(Peon const & rhs);
    
    void Getpolymorphed(void) const;
    
};
