/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:02:11 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/20 14:40:56 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, int gradeToSign, int gradeToExecute);
		Form(Form const & other);
		~Form();
		Form & operator=(Form const & other);
	
		std::string const & getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool isSigned() const;
		void beSigned(Bureaucrat const & bureaucrat);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Form grade is too high!";
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Form grade is too low!";
				}
		};
	
	private:
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _signed;
};

std::ostream & operator<<(std::ostream & os, Form const & form);