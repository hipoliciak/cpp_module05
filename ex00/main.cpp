/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:16:01 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 16:59:51 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Bureaucrat1", 1);
		std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
		b1.incrementGrade();
		std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("Bureaucrat2", 150);
		std::cout << b2.getName() << " has grade " << b2.getGrade() << std::endl;
		b2.decrementGrade();
		std::cout << b2.getName() << " has grade " << b2.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("Bureaucrat3", 42);
		std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
		b3.incrementGrade();
		std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
		b3.decrementGrade();
		std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b4("Bureaucrat4", 0);
		std::cout << b4.getName() << " has grade " << b4.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b5("Bureaucrat5", 151);
		std::cout << b5.getName() << " has grade " << b5.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
