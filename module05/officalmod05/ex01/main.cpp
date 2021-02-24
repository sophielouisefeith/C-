/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 19:39:23 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/18 14:15:18 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream> 


int	main(void) {

	std::cout << BBLACK<< "****** Basic test with multiply in try ****" << RESET<< std::endl;
	{
		try
		{
        
			/* Bureaucrat	Marran; this is not possible cuase we have the constructor in private */
			Bureaucrat	Lina("Lina", 75);
			Bureaucrat	Omar("Omar", 1);
			Bureaucrat	Marcel("Marcel", 151);
		
		}
		catch (std::exception& e) {
			std::cerr << "STOP : " << e.what() << std::endl;
		}
	}
std::cout << BBLACK<< "****** Test with michel ****" << RESET<< std::endl;
	/* too high */
	{
		try
		{
			Bureaucrat	Michel("Michel", 0);
			
		}
		catch (std::exception& e) {
			std::cerr << "STOP : " << e.what() << std::endl;
		}
	}

	/*Grade too low */
	{
		try
		{
			Bureaucrat	Michel("Michel", 200);
			std::cout << "You should not see this" << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << "STOP : " << e.what() << std::endl;
		}
	}

    std::cout << BBLACK<< "****** now we test wit incrementing ****" << RESET<< std::endl;

	/* we make eva  and increment so it will be to low*/
	{
		try
		{
			Bureaucrat	Eva("••••Eva :", 2);
			std::cout << YELLOW<< Eva << "••••We increment with 2 ( or fill in yourself)" << std::endl;
			Eva.incGrade(2);
		}
		catch (std::exception& e) {
			std::cerr <<YELLOW << "••••STOP : " << e.what() << RESET << std::endl;
		}
	}
    std::cout << BBLACK<< "****** now we test wit decrementing ****" << RESET<< std::endl;  
	// Grade too low after decrement
	{
		try
		{
			Bureaucrat	Jan("••••Jan :", 149);
			std::cout << RED<< Jan << "••••We decrement with 2 ( or fill in yourself" << std::endl;
			Jan.decGrade(2);
		}
		catch (std::exception& e) {
			std::cerr << RED << "••••STOP : " << e.what() << RESET << std::endl;
		}
	
	// Form with too high grade
	{
		try
		{
			Form	hollidayForm("Holliday Form", 0, 50);
			std::cout << "You should not see this" << std::endl;
		}
		catch(std::exception& e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}
	}

	// Form with too low grade
	{
		try
		{
			Form	hollidayForm("Holliday Form", 50, 151);
			std::cout << "You should not see this" << std::endl;
		}
		catch(std::exception& e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}
	}

	// Bureaucrat has too low grade to sign form
	{
		try
		{
			Bureaucrat	Omar;
			Form		form("Regular Form", 50, 50);

			Omar.signForm(form);
		}
		catch(std::exception& e) {
			std::cerr << "STOP : " << e.what() << std::endl;
		}
	}

	// Everything is fine
	{
		try
		{
			Bureaucrat	Eva("Eva", 1);
			Form		form("Standard Form", 50, 50);

			Eva.signForm(form);
			std::cout << "Everything is a-OK!" << std::endl;
		}
		catch(std::exception& e) {
			std::cerr << BBLUE <<"STOP : " << e.what() << std::endl;
		}
	}
	return 0;
}
}

