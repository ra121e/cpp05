/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:20:37 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 23:57:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	a("First secretary", 5);
	Bureaucrat	b("last secretary", 150);
	ShrubberyCreationForm f("home");
	std::cout << f << std::endl;
	b.executeForm(f);
	a.signForm(f);
	b.executeForm(f);
	a.executeForm(f);
	return (0);
}