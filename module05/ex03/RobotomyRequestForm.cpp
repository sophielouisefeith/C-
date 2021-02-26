/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:37:18 by liz           #+#    #+#                 */
/*   Updated: 2021/01/19 15:10:27 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <cstring>

int rndm = 0;

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
		throw Form::FormNotSigned();
	else if (executor.getGrade() >= this->getGradeExecute())
	{
		std::cout << "Can't be executed because: ";
		throw Form::GradeTooLowException();
	}
	std::cout << "* DRILLLL DRILLL KADENG WHEEE *" << std::endl;
	if (rndm == 0)
	{
		srand(time(NULL));
		rndm = 1;
	}
	if (rand() % 2 == 0)
	{
		std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
	}
	else
		std::cout << "Robotomizing has failed" << std::endl;
	return ;
}