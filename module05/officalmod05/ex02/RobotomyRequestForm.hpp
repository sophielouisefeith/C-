/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 13:40:47 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 13:53:08 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class RobotomyRequestForm : public Form {
private:
	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	RobotomyRequestForm const & operator=(RobotomyRequestForm const & rhs);
	virtual ~RobotomyRequestForm(void);
	void	execute(Bureaucrat const & executor) const;

    int _random;
};
