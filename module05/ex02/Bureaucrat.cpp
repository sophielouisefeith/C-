/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 15:12:27 by liz           #+#    #+#                 */
/*   Updated: 2021/01/19 12:52:26 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->_grade = grade;
	}
	return ;
}

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy): _name(copy._name), _grade(copy._grade)
{
	return ;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (&rhs != this)
	{
		this->_grade = rhs._grade;
	}
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

void		Bureaucrat::incrementGrade(void)
{
	setGrade(this->_grade - 1);
}

void		Bureaucrat::decrementGrade(void)
{
	setGrade(this->_grade + 1);
}

void		Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because ";
		std::cout << e.what() << std::endl;
		return ;
	}
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		return ;
}

void		Bureaucrat::executeForm(Form const & form)
{
	try {
		form.execute(*this);
	}
	catch (std::exception & e)
	{
		std::cout << form.getName() << " can't be executed because ";
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & stream, Bureaucrat const & Bureaucrat)
{
	stream << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade()<< "." << std::endl;
	return (stream);
}