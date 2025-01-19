/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:16:01 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 17:23:57 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Bureaucrat1", 1);
		std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
		Form f1("Form1", 0, 1);
		std::cout << f1.getName() << " has grade to sign " << f1.getGradeToSign() << " and grade to execute " << f1.getGradeToExecute() << std::endl;
		b1.signForm(f1);
		std::cout << "Form is signed: " << f1.isSigned() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("Bureaucrat2", 150);
		std::cout << b2.getName() << " has grade " << b2.getGrade() << std::endl;
		Form f2("Form2", 150, 151);
		std::cout << f2.getName() << " has grade to sign " << f2.getGradeToSign() << " and grade to execute " << f2.getGradeToExecute() << std::endl;
		b2.signForm(f2);
		std::cout << "Form is signed: " << f2.isSigned() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("Bureaucrat3", 42);
		std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
		Form f3("Form3", 40, 42);
		std::cout << f3.getName() << " has grade to sign " << f3.getGradeToSign() << " and grade to execute " << f3.getGradeToExecute() << std::endl;
		b3.signForm(f3);
		std::cout << "Form is signed: " << f3.isSigned() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b4("Bureaucrat4", 42);
		std::cout << b4.getName() << " has grade " << b4.getGrade() << std::endl;
		Form f4("Form4", 45, 40);
		std::cout << f4.getName() << " has grade to sign " << f4.getGradeToSign() << " and grade to execute " << f4.getGradeToExecute() << std::endl;
		b4.signForm(f4);
		std::cout << "Form is signed: " << f4.isSigned() << std::endl;
		b4.signForm(f4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
