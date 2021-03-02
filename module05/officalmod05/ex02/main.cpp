/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 19:39:23 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 12:26:48 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream> 


int main()
{
	Bureaucrat *Joepi = new Bureaucrat("Joepi", 52);
	PresidentialPardonForm *president = new PresidentialPardonForm("sectraresse");
	ShrubberyCreationForm *shrub = new ShrubberyCreationForm("World");
	RobotomyRequestForm *robot = new RobotomyRequestForm("Stupid");


	std::cout << BBLACK<< "****** Check if scrubberyy is signed****" << RESET<< std::endl;
	
	try {
		std::cout << *shrub;
		std::cout << *Joepi;
		Joepi->signForm(*shrub);
		shrub->execute(*Joepi);
		std::cout << *shrub;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	std::cout << BBLACK<< "****** joep tries to sign the form ****" << RESET<< std::endl;
	try {
		std::cout << *Joepi;
		std::cout << *president;
		president->beSigned(*Joepi);
		std::cout << *president;
		president->execute(*Joepi);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	std::cout << BBLACK<< "****** upgrade points, signin presidential form ****" << RESET<< std::endl;
	try {
	
		Joepi->incGrade(30);
		std::cout << *Joepi;
		Joepi->signForm(*president);
		std::cout << *president;
		Joepi->signForm(*president);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	std::cout << BBLACK<< "****** upgrade points ****" << RESET<< std::endl;
	try {
		Joepi->incGrade(20);
		Joepi->signForm(*president);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	try {
		std::cout << *robot;
		robot->execute(*Joepi);
		std::cout << *robot;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	try {
		Joepi->signForm(*robot);
		robot->execute(*Joepi);
		robot->execute(*Joepi);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	delete Joepi;
	delete president;
	delete shrub;
	delete robot;
}
