/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 13:40:44 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/04 14:26:26 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <cstring>


RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy): Form(copy)
{
	return ;
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (&rhs != this)
	{
		Form::operator=(rhs);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}


void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != 1)
		throw Form::NoSignature();
	else if (executor.getGrade() >= this->getGradeExecute())
	{
		std::cout << "can't be executed because: ";
		throw Form::GradeTooLowException();
	}
	int random = 0;
	std::cout << "DRILL SOUND" << std::endl;
	if (random == 0)
	{
		srand(time(NULL));
		random = 1;
	}
	if (rand() % 2 == 0)
	{
		std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
	}
	else
		std::cout << "Robotomizing has failed" << std::endl;
	return ;
}