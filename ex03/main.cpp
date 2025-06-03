/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:36:03 by athonda           #+#    #+#             */
/*   Updated: 2025/06/03 11:36:13 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	printBanner(std::string const &title)
{
	std::cout << "\n--- " << title << " ---" << std::endl;
}

int	main(void)
{
	printBanner("simple test");
	Bureaucrat	minister("First secretary", 5);
	Bureaucrat	officer("last secretary", 150);
	RobotomyRequestForm document("home");
	std::cout << document << std::endl;
	officer.executeForm(document);
	minister.signForm(document);
	std::cout << document << std::endl;
	officer.executeForm(document);
	minister.executeForm(document);

	printBanner("Shall we hire a intern?");
	Intern	boy;
	AForm	*doc;
	doc = boy.makeForm("Robotomy", "Christopher");
	std::cout << *doc << std::endl;
	officer.executeForm(*doc);
	minister.signForm(*doc);
	std::cout << *doc << std::endl;
	officer.executeForm(*doc);
	minister.executeForm(*doc);

	delete doc;

	return (0);
}
