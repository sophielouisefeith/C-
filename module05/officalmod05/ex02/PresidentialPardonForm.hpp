/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 13:40:51 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 13:59:23 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class PresidentialPardonForm : public Form {
private:
	PresidentialPardonForm(void);
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	PresidentialPardonForm const & operator=(PresidentialPardonForm const & rhs);
	virtual ~PresidentialPardonForm(void);
	void	execute(Bureaucrat const & executor) const;
};

