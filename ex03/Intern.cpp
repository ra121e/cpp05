/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:21:26 by athonda           #+#    #+#             */
/*   Updated: 2025/06/03 12:38:09 by athonda          ###   ########.fr       */
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
	AForm	*aform = NULL;
	for (int i = 0; i < 3; ++i)
	{
		if (formTable[i].formName == form)
		{
			aform = (this->*formTable[i].func)(target);
			std::cout << "Intern creats " << aform->getName() << std::endl;
			return (aform) ;
		}
	}
	std::cerr << "Error: there is no " << form << ". [Shuruberry][Robotomy][Presidential]" << std::endl;
	return (NULL);
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