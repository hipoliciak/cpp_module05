/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:16:01 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 20:09:03 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Bureaucrat 1", 1);
		PresidentialPardonForm f1("Target 1");
		RobotomyRequestForm f2("Target 2");
		ShrubberyCreationForm f3("Target 3");

		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;

		b1.signForm(f1);
		b1.signForm(f2);
		b1.signForm(f3);

		b1.executeForm(f1);
		b1.executeForm(f2);
		b1.executeForm(f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b2("Bureaucrat 2", 70);
		PresidentialPardonForm f4("Target 4");
		RobotomyRequestForm f5("Target 5");
		ShrubberyCreationForm f6("Target 6");

		std::cout << b2 << std::endl;
		std::cout << f4 << std::endl;
		std::cout << f5 << std::endl;
		std::cout << f6 << std::endl;

		b2.signForm(f4);
		b2.signForm(f5);
		b2.signForm(f6);

		b2.executeForm(f4);
		b2.executeForm(f5);
		b2.executeForm(f6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
