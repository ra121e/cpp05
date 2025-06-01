/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:23:03 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 21:14:49 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
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
	std::cout << executor << std::endl;
	std::string fileName = this->getTarget() + "_shrubbery";
	std::ofstream ofs(fileName.c_str());
	ofs << "        ,.,.,\n";
	ofs << "     ,.,;:;：:､、,,:.：,..\n";
	ofs << " ,,;:;:；｡;,;:：:;:：::;,..\n";
	ofs << ",.,:,,:;;:;:：;,.,｡,.,:,;:;:：;,.\n";
	ofs << "     ''''yi''''''yi''\n";
	ofs << "     ,..ili .,,,.il\n";
}