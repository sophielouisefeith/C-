/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 15:10:08 by liz           #+#    #+#                 */
/*   Updated: 2021/01/17 15:39:04 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class Form;

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;
	Bureaucrat(void);
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & copy);
	Bureaucrat const & operator=(Bureaucrat const & rhs);
	~Bureaucrat(void);

	std::string getName(void) const;
	int			getGrade(void) const;
	void		setGrade(int grade);
	void		incrementGrade(void);
	void		decrementGrade(void);
	void		signForm(Form & form);
	void		executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Grade is too high");
		}	
	};
	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Grade is too low");
		}
	};
};

std::ostream & operator<<(std::ostream & stream, Bureaucrat const & rhs);

#endif
