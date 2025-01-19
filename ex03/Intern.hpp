/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:30:46 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 21:21:39 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include <functional>
#include "AForm.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		Intern(Intern const & other);
		~Intern();
		Intern & operator=(Intern const & other);

		AForm * makeForm(std::string const & formName, std::string const & target);
	
	private:
		AForm * _createPresidentialPardonForm(std::string const & target);
		AForm * _createRobotomyRequestForm(std::string const & target);
		AForm * _createShrubberyCreationForm(std::string const & target);
};