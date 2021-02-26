/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 19:39:18 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/26 14:21:22 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


/*colonical */

/*constructor */

Bureaucrat::Bureaucrat(void){

    return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name){

    if(grade < 1)
    {
        /*  we use trow to the exeption so it will put an error message */
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

void		Bureaucrat::incGrade(int i)  //-
{
    
    if (_grade - i < 1)
    {
		throw GradeTooHighException();
    }
    else
		_grade = _grade - i;
    
}

void		Bureaucrat::decGrade(int i) //+
{
	if (_grade + i > 150)
		throw GradeTooLowException();
    else
		_grade = _grade + i;
}


void		Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
        std::cout<< RED<<  "this" <<*this << RESET<<std::endl;
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

std::ostream & operator<<(std::ostream & stream, Bureaucrat const & Bureaucrat)
{
	stream << Bureaucrat.getName() << "[operator]••••bureaucrat grade " << Bureaucrat.getGrade()<< "." << std::endl;
	return (stream);
}

