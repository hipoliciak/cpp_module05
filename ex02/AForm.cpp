/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:53:33 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/01/19 19:18:32 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & other): _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade), _signed(other._signed)
{
}

AForm::~AForm()
{
}

AForm & AForm::operator=(AForm const & other)
{
	if (this != &other)
	{
		_signed = other._signed;
	}
	return *this;
}

std::string const & AForm::getName() const
{
	return _name;
}

int AForm::getSignGrade() const
{
	return _signGrade;
}

int AForm::getExecGrade() const
{
	return _execGrade;
}

bool AForm::isSigned() const
{
	return _signed;
}

void AForm::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	if (_signed)
		throw AForm::FormAlreadySignedException();
	_signed = true;
}

std::ostream & operator<<(std::ostream & os, AForm const & form)
{
	os << form.getName() << ", form sign grade " << form.getSignGrade() << ", form exec grade "
		<< form.getExecGrade() << ", form is " << (form.isSigned() ? "" : "not ") << "signed";
	return os;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!isSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > _execGrade)
		throw AForm::GradeTooLowException();
}
