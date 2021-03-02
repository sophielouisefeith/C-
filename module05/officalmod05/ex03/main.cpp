/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 19:39:23 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 18:18:13 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream> 



int main()
{
	Intern  someRandomIntern;
	Form*   rrf;
	rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
	std::cout << rrf->getTarget() << std::endl ;
	rrf = someRandomIntern.makeForm("Fake News", "Amerika");
	
}