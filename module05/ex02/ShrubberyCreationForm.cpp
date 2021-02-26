/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 11:21:28 by liz           #+#    #+#                 */
/*   Updated: 2021/01/19 15:10:07 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <cstring>

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
		throw Form::FormNotSigned();
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