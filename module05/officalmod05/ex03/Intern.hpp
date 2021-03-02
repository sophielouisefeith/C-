/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 14:05:47 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/28 18:08:59 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern&);
		Intern &operator=(const Intern&);

		Form *makeForm(const std::string &formName, const std::string &target) ;
} ;