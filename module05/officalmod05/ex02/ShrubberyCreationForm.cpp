/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 12:48:17 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 13:50:26 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <cstring>


/* we add target  */
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy): Form(copy)
{
	return ;
}

ShrubberyCreationForm const & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (&rhs != this)
	{
		Form::operator=(rhs);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != 1)
		throw Form::NoSignature();
	else if (executor.getGrade() >= this->getGradeExecute())
	{
		std::cout << "Can't be executed because: ";
		throw Form::GradeTooLowException();
	}
	else
	{
		std::ofstream output;
		std::string str = this->getTarget();
		str += "_shrubbery";
		output.open(str.c_str());
        /*piramade ASCCI */
		output << "		   ###\n";
		output << "		  #o###\n";
		output << "		#####o###\n";
		output << "	   #o#\"#|#/###\n";
		output << "		###\"|/#o#\n";
		output << "		 # }|{ #\n";
		output << "		   }|{\n";
		output.close();
	}
}