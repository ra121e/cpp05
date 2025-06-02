/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:36:03 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 19:36:17 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	a("First secretary", 5);
	Bureaucrat	b("last secretary", 150);
	RobotomyRequestForm f("home");
	std::cout << f << std::endl;
	b.executeForm(f);
	a.signForm(f);
	std::cout << f << std::endl;
	b.executeForm(f);
	a.executeForm(f);

	Intern	boy;
	AForm	*doc;
	doc = boy.makeForm("Robotomy", "Christopher");
	std::cout << doc->getName() << std::endl;


	return (0);
}
