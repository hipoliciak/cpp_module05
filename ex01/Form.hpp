/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:02:11 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 17:24:26 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

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
		void beSigned();
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
		int _gradeToSign;
		int _gradeToExecute;
		bool _signed;
};