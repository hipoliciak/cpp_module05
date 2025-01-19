/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:53:42 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 21:45:16 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string const name, int signGrade, int execGrade);
		AForm(AForm const & other);
		virtual ~AForm();
		AForm & operator=(AForm const & other);
	
		std::string const & getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool isSigned() const;
		void beSigned(Bureaucrat & bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Form is not signed!";
				}
		};
		class FormAlreadySignedException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Form is already signed!";
				}
		};
	
	private:
		std::string const _name;
		int const _signGrade;
		int const _execGrade;
		bool _signed;
};

std::ostream & operator<<(std::ostream & os, AForm const & form);