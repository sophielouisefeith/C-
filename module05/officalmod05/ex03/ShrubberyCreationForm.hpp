/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 12:48:20 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 13:26:56 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"


/* ShrubberyCreationForm (Required grades: sign 145, exec 137). Action: Create
a file called <target>_shrubbery, and write ASCII trees inside it, in the current
directory. */


class Form;
class Bureaucrat;

class ShrubberyCreationForm : public Form{
    
    public:
    ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & copy);
	ShrubberyCreationForm const & operator=(ShrubberyCreationForm const & rhs);
	virtual ~ShrubberyCreationForm(void);
     

    /* executing the forms action! */
	void	execute(Bureaucrat const & executor) const;

    private:
    /* constructor is private because we dont want them to change the values  */
    ShrubberyCreationForm();
    
};