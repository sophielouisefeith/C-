/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 14:05:43 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/02 11:49:41 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <string>

static Form *createwelcome(const std::string &target);
static Form *creategoodby(const std::string &target);
static Form *createsick(const std::string &target);
		
Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern(const Intern&) {}

Intern &Intern::operator=(const Intern&) {{return *this;}}

Form *createwelcome(const std::string &target){
	return new PresidentialPardonForm(target);
}

Form *creategoodby(const std::string &target){
	return new RobotomyRequestForm(target);
}

Form *createsick(const std::string &target){
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) {
	Form *ret = NULL;
	typedef Form*(*funct)(const std::string &target);
	typedef struct {
		std::string form_name;
		funct func;
	} formTypes ;
	
	formTypes forms[3] = {
		{"welcome form", &createwelcome},
		{"goodby form", &creategoodby},
		{"sick form", &createsick}
	} ;
	
	for (int i = 0; i < 1 ; i++){
		if(forms[i].form_name == formName){
			ret = forms[i].func(target);
			std::cout << YELLOW << "The intern creates a " << formName << " for " <<  target << RESET << std::endl ;
			return ret;
		}
		std::cout << YELLOW << "The intern is not able to create " << " ' "<< formName <<" ' "<<RED <<" because she is sick " << RESET << std::endl ;
	}
	return NULL;
}