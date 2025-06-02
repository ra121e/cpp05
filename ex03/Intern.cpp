/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:21:26 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 18:57:24 by athonda          ###   ########.fr       */
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
{}

Intern	&Intern::operator=(Intern const &other)
{}

Intern::~Intern()
{}

struct Intern::s_formTable	Intern::formTable[3] =
{
	{"Shrubbery", &Intern::makeShrubberyCreationForm},
	{"Robotomy", &Intern::makeRobotomyRequestForm},
	{"Presidential", &Intern::makePresidentialPardonForm}
}

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
			(this->*(formTable[0].func))();
		case 1:
			(this->*(formTable[1].func))();
		case 2:
			(this->*(formTable[2].func))();
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