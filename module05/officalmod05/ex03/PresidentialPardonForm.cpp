/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 13:40:49 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 14:12:44 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <cstring>

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy)
{
	return ;
}

PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (&rhs != this)
	{
		Form::operator=(rhs);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != 1)
		throw Form::NoSignature();
	else if (executor.getGrade() >= this->getGradeExecute())
	{
		std::cout << "Can't be executed because: ";
		throw Form::GradeTooLowException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}