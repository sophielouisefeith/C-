/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 17:18:56 by liz           #+#    #+#                 */
/*   Updated: 2021/01/19 15:21:27 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat	High("High", 1);
	Bureaucrat	Low("Low", 150);
	RobotomyRequestForm r1("Garden");
	ShrubberyCreationForm		s1("Home");
	PresidentialPardonForm		p1("Pallace");

	
	std::cout << s1 << r1 << p1;
	std::cout << High;
	std::cout << Low;
	try 
	{
		High.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	//trying to get it signed twice
	try 
	{
		s1.beSigned(High);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		s1.beSigned(High);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		High.signForm(s1);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		s1.execute(High);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//RobotomyRequestForm
	try
	{
		r1.beSigned(High);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		r1.beSigned(Low);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		r1.execute(High);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		r1.execute(Low);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;	
	}
	//PresidentialPardonForm
	try {
		High.signForm(p1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		High.signForm(p1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Low.signForm(p1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		p1.execute(Low);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl; 
	}
	try {
		High.executeForm(p1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}