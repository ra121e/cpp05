/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:23:03 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 20:44:35 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", 145, 137, "Default Target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	AForm("ShrubberyCreationForm", 145, 137, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
	AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute(), other.getTarget())
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::cout << executor.getName() << std::endl;
}