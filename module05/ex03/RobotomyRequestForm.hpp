/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:37:32 by liz           #+#    #+#                 */
/*   Updated: 2021/01/14 11:46:32 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef RobotoMYREQUESTFORM_HPP
#define RobotoMYREQUESTFORM_HPP

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
};

#endif