/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 12:52:22 by liz           #+#    #+#                 */
/*   Updated: 2021/01/17 16:07:42 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

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

#endif