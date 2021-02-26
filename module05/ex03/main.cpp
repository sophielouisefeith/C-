/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 17:18:56 by liz           #+#    #+#                 */
/*   Updated: 2021/01/18 13:35:16 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;
	Form* form;

	form = intern.makeForm("robotomy request", "Mall");
	delete form;
	form = intern.makeForm("shrubbery creation", "castle");
	delete form;
	form = intern.makeForm("presidential request", "house");
	delete form;
	form = intern.makeForm("not a form", "target");
	delete form;
	return (0);
}