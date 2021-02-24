/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 19:39:21 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/17 13:26:21 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <string>
#include <exception>
#include "Color.hpp"

/* expetions  */

class Bureaucrat{

    public:
        
        Bureaucrat(std:: string const name, int grade);
        /*copy*/
        Bureaucrat(Bureaucrat const &src);
        /*operator*/
        Bureaucrat const & operator=(Bureaucrat const & rhs);
        ~Bureaucrat(void);

        /*getters */

        std::string         getName() const;
        int                 getGrade() const;
        void		        setGrade(int grade);

        /* increment or decrement */
        
        void incGrade(int i);
        void decGrade(int i);  

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

    private:
        /*constructor in private because of control , we dont want to make a bureaucrat without name and grade*/
        Bureaucrat(void);
        std::string const   _name;
        int                 _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);