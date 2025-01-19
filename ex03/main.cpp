/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:16:01 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 21:42:10 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Bureaucrat 1", 1);
		Intern i1;

		std::cout << b1 << std::endl;

		AForm *f1 = i1.makeForm("PresidentialPardonForm", "Target 1");
		AForm *f2 = i1.makeForm("RobotomyRequestForm", "Target 2");
		AForm *f3 = i1.makeForm("ShrubberyCreationForm", "Target 3");

		std::cout << *f1 << std::endl;
		std::cout << *f2 << std::endl;
		std::cout << *f3 << std::endl;

		b1.signForm(*f1);
		b1.signForm(*f2);
		b1.signForm(*f3);

		b1.executeForm(*f1);
		b1.executeForm(*f2);
		b1.executeForm(*f3);

		delete f1;
		delete f2;
		delete f3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b2("Bureaucrat 2", 70);
		Intern i2;

		std::cout << b2 << std::endl;

		AForm *f4 = i2.makeForm("PresidentialPardonForm", "Target 4");
		AForm *f5 = i2.makeForm("RobotomyRequestForm", "Target 5");
		AForm *f6 = i2.makeForm("ShrubberyCreationForm", "Target 6");

		std::cout << *f4 << std::endl;
		std::cout << *f5 << std::endl;
		std::cout << *f6 << std::endl;

		b2.signForm(*f4);
		b2.signForm(*f5);
		b2.signForm(*f6);

		b2.executeForm(*f4);
		b2.executeForm(*f5);
		b2.executeForm(*f6);

		delete f4;
		delete f5;
		delete f6;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
