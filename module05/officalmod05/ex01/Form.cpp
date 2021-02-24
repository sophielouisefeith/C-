/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/17 14:30:53 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/18 14:15:45 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade): _name(name), _signGrade(signGrade), _executeGrade(executeGrade) 
{
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & copy): _name(copy._name), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade), _signed(copy._signed)
{
	return ;
}

Form const & Form::operator=(Form const & rhs)
{
	if (&rhs != this)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

int			Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int			Form::getExecutGrade(void) const
{
	return (this->_executeGrade);
}

/* here we get information from the function in the */
void		Form::beSigned(Bureaucrat const & rhs)
{
	if (this->_signed == 1)
	{
		throw FormAlreadySigned();
	}
	else if (rhs.getGrade() <= this->_signGrade)
	{
		this->_signed = 1;
	}
	else
	{
		throw GradeTooLowException();
	}
	return ;
}

std::ostream & operator<<(std::ostream & stream, Form const & form)
{
	if (form.getSigned() == 1)
		stream << "Form " << form.getName() << " Grade to sign = " << form.getSignGrade() << " Grade to execute = " << form.getExecutGrade() << " is signed" << std::endl; 
	else
		stream << "Form " << form.getName() << " Grade to sign = " << form.getSignGrade() << " Grade to execute = " << form.getExecutGrade() << " is not signed" << std::endl; 
	return (stream);
}