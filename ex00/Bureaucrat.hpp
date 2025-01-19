/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:15:51 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 19:44:39 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & other);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & other);
	
		std::string const & getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Grade is too high!";
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Grade is too low!";
				}
		};
	
	private:
		std::string const _name;
		int _grade;
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat);