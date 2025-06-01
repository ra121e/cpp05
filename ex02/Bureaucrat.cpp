/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:31:21 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 20:40:14 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() :
	_name("nonName"),
	_grade(150)
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
	_name(name),
	_grade(grade)
{
	if (_grade < 1)
	{
		throw (GradeTooHighException());
	}
	else if (_grade > 150)
	{
		throw (GradeTooLowException());
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) :
	_name(other._name),
	_grade(other._grade)
{}

Bureaucrat::~Bureaucrat()
{}

std::string const	&Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade++;
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (os);
}
