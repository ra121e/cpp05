/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 08:53:04 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 09:05:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 72, 45, "Default Robotomy")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	AForm("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute(), other.getTarget())
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::CheckBeforeExecute(executor);
}