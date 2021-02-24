/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/17 14:30:56 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/18 12:48:33 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Color.hpp"
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form {

public:

	Form(std::string name, int signGrade, int executeGrade);
	Form(Form const & copy);
	Form const & operator=(Form const& rhs);
	~Form();

	std::string 	getName() const;
	int					getSignGrade() const;
	int					getExecutGrade() const;
	bool				getSigned() const;

	void				beSigned(Bureaucrat const& bureaucrat);

	        /* expections */     
        
            class GradeTooHighException : public std:: exception{
                public:
                    /*  if statement  */
                    const char * what() const throw()    
                    {
                        return(" [exeption]Grade is too high");
                    }
                
            
            };
            class GradeTooLowException : public std:: exception{
                            public:
                    /*  if statement  */
                    const char * what() const throw()    
                    {
                        return("[exeption]Grade is too low");
                    }
            };

    class FormAlreadySigned : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Form Already signed");
		}
	};

private:

	/*•••constructor private, no change in data•••*/
	Form(void);
	void		_checkGrade() const;

	std::string const	_name;
	int const			_signGrade;
	int const			_executeGrade;
	/* bool •••true or false••• */
	bool				_signed;

};

std::ostream&	operator<<(std::ostream& o, Form const& i);
