/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:21:26 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 19:29:41 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern	&Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{}

struct Intern::s_formTable	Intern::formTable[3] =
{
	{"Shrubbery", &Intern::makeShrubberyCreationForm},
	{"Robotomy", &Intern::makeRobotomyRequestForm},
	{"Presidential", &Intern::makePresidentialPardonForm}
};

AForm	*Intern::makeForm(std::string const &form, std::string const &target)
{
	int	index = 4;
	for (int i = 0; i < 3; ++i)
	{
		if (formTable[i].formName == form)
		{
			index = i;
			break ;
		}
	}
	switch(index)
	{
		case 0:
			return ((this->*(formTable[0].func))(target));
		case 1:
			return ((this->*(formTable[1].func))(target));
		case 2:
			return ((this->*(formTable[2].func))(target));
		default:
			return (NULL);
	}
}

AForm	*Intern::makeShrubberyCreationForm(std::string const &target)
{
	return (new	ShrubberyCreationForm(target));
}

AForm	*Intern::makeRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makePresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}