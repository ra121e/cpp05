/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 10:37:26 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 11:52:25 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() :
	_name("General Application"),
	_signed(false),
	_gradeToSign(1),
	_gradeToExecute(1)
{}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute):
	_name(name),
	_signed(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &other):
	_name(other._name),
	_signed(other._signed),
	_gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute)
{

}

AForm::~AForm()
{}

std::string const	&AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat b)
{
	if (this->getGradeToSign() <= b.getGrade())
	{
		throw (AForm::GradeTooLowException());
	}
	else
	{
		this->_signed = true;
	}
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

std::ostream	&operator<<(std::ostream &os, AForm const &f)
{
	os << f.getName() << ", Grade to sign " << f.getGradeToSign() << ", Grade to Execute " << f.getGradeToExecute() << " :Signed[Yes:1 No:0] [" << f.getSigned() << "].";

	return (os);
}
