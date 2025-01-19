/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:30:39 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 21:41:53 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & other)
{
	(void)other;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern const & other)
{
	(void)other;
	return *this;
}

AForm* Intern::makeForm(std::string const &formName, std::string const &target)
{
    typedef AForm* (Intern::*FormCreator)(std::string const &);

    struct FormEntry
	{
        std::string name;
        FormCreator creator;
    };

    static const FormEntry formEntries[] =
	{
        {"PresidentialPardonForm", &Intern::_createPresidentialPardonForm},
        {"RobotomyRequestForm", &Intern::_createRobotomyRequestForm},
        {"ShrubberyCreationForm", &Intern::_createShrubberyCreationForm}
    };

    for (size_t i = 0; i < sizeof(formEntries) / sizeof(FormEntry); ++i)
	{
        if (formEntries[i].name == formName)
		{
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*(formEntries[i].creator))(target);
        }
    }
    std::cout << "Error: Form " << formName << " not found" << std::endl;
    return NULL;
}


AForm * Intern::_createPresidentialPardonForm(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

AForm * Intern::_createRobotomyRequestForm(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

AForm * Intern::_createShrubberyCreationForm(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}
