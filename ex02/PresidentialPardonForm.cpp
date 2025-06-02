/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:18:31 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 10:44:58 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", 25, 5, "ex-president")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	AForm("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
	AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute(), other.getTarget())
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::executor(Bureaucrat const &executor) const
{
	AForm::CheckBeforeExecute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}