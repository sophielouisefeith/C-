/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 12:58:29 by liz           #+#    #+#                 */
/*   Updated: 2021/01/17 16:09:00 by liz           ########   odam.nl         */
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