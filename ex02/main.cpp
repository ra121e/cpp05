/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:20:37 by athonda           #+#    #+#             */
/*   Updated: 2025/06/06 16:48:28 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	printBanner(std::string const &title)
{
	std::cout << "\n--- " << title << " ---" << std::endl;
}

int	main(void)
{
	printBanner("simple test");
	Bureaucrat	a("First secretary", 5);
	Bureaucrat	b("last secretary", 150);
	RobotomyRequestForm f("home");
	std::cout << f << std::endl;
	b.executeForm(f);
	a.signForm(f);
	std::cout << f << std::endl;
	b.executeForm(f);
	a.executeForm(f);

	printBanner("Edge case: Bureaucrat is same grade to Form grade to signe");
	Bureaucrat	c("145 secretary", 145);
	std::cout << c << std::endl;

	Bureaucrat	d("146 secretary", 146);
	std::cout << d << std::endl;
	ShrubberyCreationForm	g("bald head");
	std::cout << g << std::endl;
	d.signForm(g);
	c.signForm(g);
	std::cout << g << std::endl;

	return (0);
}