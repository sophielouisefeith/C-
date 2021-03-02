/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 19:39:23 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 11:49:47 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream> 



int main()
{
	Intern  someRandomIntern;
	Form*   nameform;
	nameform = someRandomIntern.makeForm("welcome form", "her team");
	std::cout << nameform->getTarget() << std::endl ;
	nameform = someRandomIntern.makeForm("sick form", "newstaff");
	
}