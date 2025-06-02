/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:20:37 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 11:35:04 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	return (0);
}