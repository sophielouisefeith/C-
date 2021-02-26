/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 14:05:43 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 14:06:20 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & copy)
{
	if (&copy != this)
	{
		*this = copy;
	}
	return ;
}

Intern const & Intern::operator=(Intern const & rhs)
{
	if (&rhs != this)
	{
		*this = rhs;
	}
    return (*this);
}

Intern::~Intern(void)
{
	return ;
}

Form*		Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*		Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*		Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*		Intern::makeForm(std::string name, std::string target)
{
	std::string Names[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form* (Intern:: *function_array[3])(std::string target) = {
		&Intern::makeRobotomy,
		&Intern::makeShrubbery,
		&Intern::makePresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == Names[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*function_array[i])(target));
		}
	}
	std::cout << name << " not found" << std::endl;
	return (NULL);
}