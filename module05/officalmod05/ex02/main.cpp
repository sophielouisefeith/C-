/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 19:39:23 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 18:39:18 by SophieLouis   ########   odam.nl         */
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
	PresidentialPardonForm *president = new PresidentialPardonForm("Governeur");
	ShrubberyCreationForm *shrub = new ShrubberyCreationForm("Garden");
	RobotomyRequestForm *robot = new RobotomyRequestForm("Duck");
	
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
	try {
		std::cout << *Joepi;
		std::cout << *president;
		std::cout << "-- Joepi is trying to sign the form. --" << std::endl ;
		president->beSigned(*Joepi);
		std::cout << *president;
		president->execute(*Joepi);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	try {
		std::cout << "-- Upgrading Joepis grade. --" << std::endl ;
		Joepi->incGrade(30);
		std::cout << *Joepi;
		std::cout << "-- Joepi tries to sign and execute the form. --" << std::endl ;
		Joepi->signForm(*president);
		std::cout << *president;
		std::cout << "-- Joepi tries to execute the form. --" << std::endl ;
		Joepi->signForm(*president);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	try {
		std::cout << "-- Again upgrading Joepis grade. --" << std::endl ;
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
