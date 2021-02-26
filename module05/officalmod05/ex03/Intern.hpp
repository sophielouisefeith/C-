/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 14:05:47 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 14:05:56 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern {
private:
public:	
	Intern(void);
	Intern(Intern const & copy);
	Intern const & operator=(Intern const & rhs);
	~Intern(void);
	Form*	makeRobotomy(std::string target);
	Form*	makePresidential(std::string target);
	Form*	makeShrubbery(std::string target);
	Form*	makeForm(std::string name, std::string target);
};