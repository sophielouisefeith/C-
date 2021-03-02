/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 14:05:43 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/28 18:09:20 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <string>

static Form *createPresident(const std::string &target);
static Form *createRobot(const std::string &target);
static Form *createShrub(const std::string &target);
		
Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern(const Intern&) {}

Intern &Intern::operator=(const Intern&) {{return *this;}}

Form *createPresident(const std::string &target){
	return new PresidentialPardonForm(target);
}

Form *createRobot(const std::string &target){
	return new RobotomyRequestForm(target);
}

Form *createShrub(const std::string &target){
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
		{"Presidential Pardon", &createPresident},
		{"robotomy request", &createRobot},
		{"shrubbery creation", &createShrub}
	} ;
	
	for (int i = 0; i < 1 ; i++){
		if(forms[i].form_name == formName){
			ret = forms[i].func(target);
			std::cout << "The intern creates " << formName << std::endl ;
			return ret;
		}
		std::cout << "The intern is not able to create " << formName << " because he just started working here." << std::endl ;
	}
	return NULL;
}