/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:39:12 by athonda           #+#    #+#             */
/*   Updated: 2025/05/25 15:43:55 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
	_name("nonName"),
	_grade(150)
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
	_name(name),
	_grade(grade)
{}

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
	if (this->_grade == 1)
	{
//		throw Bureaucrat::GradeTooHighException();
	}
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
	{
		throw "Grade too low exception";
//		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade++;
}
