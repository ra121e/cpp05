/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:23:03 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 14:08:53 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", 145, 137)
{

}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
	AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute())
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}