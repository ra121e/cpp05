/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:39:21 by athonda           #+#    #+#             */
/*   Updated: 2025/05/31 10:50:27 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :
	_name("General Application"),
	_signed(false),
	_gradeToSign(1),
	_gradeToExecute(1)
{}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
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

Form::Form(Form const &other):
	_name(other._name),
	_signed(other._signed),
	_gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute)
{

}

Form::~Form()
{}

std::string const	&Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(Bureaucrat b)
{
	if (this->getGradeToSign() <= b.getGrade())
	{
		throw (Form::GradeTooLowException());
	}
	else
	{
		this->_signed = true;
	}
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

std::ostream	&operator<<(std::ostream &os, Form const &f)
{
	os << f.getName() << ", Grade to sign " << f.getGradeToSign() << ", Grade to Execute " << f.getGradeToExecute() << " :Signed[Yes:1 No:0] [" << f.getSigned() << "].";

	return (os);
}