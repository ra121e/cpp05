/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 08:25:03 by athonda           #+#    #+#             */
/*   Updated: 2025/06/06 16:31:55 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

void	printBanner(std::string const &title)
{
	std::cout << "\n----- " << title << "-----" << std::endl;
}

int	main(void)
{
	printBanner("Form test");
	Form	a("Shinseisho", 20, 100);
	std::cout << a << std::endl;

	printBanner("Bureaucrat Form separate");
	Bureaucrat	bu("Kanri", 5);
	std::cout << bu << std::endl;
	a.beSigned(bu);
	std::cout << a.getSigned() << std::endl;

	printBanner("Bureaucrat signs Form (approval)");
	Bureaucrat	bu2("Kangan", 4);
	std::cout << bu2 << std::endl;
	Form	f("visa application", 10, 20);
	std::cout << f << std::endl;
	bu2.signForm(f);
	std::cout << f << std::endl;

	printBanner("edge case: Bureaucrat same grade to Form");
	Bureaucrat	bu3("Miyadukae", 10);
	std::cout << bu3 << std::endl;
	Form	g("birth notification", 10, 100);
	std::cout << g << std::endl;
	bu3.signForm(g);
	std::cout << g << std::endl;

	printBanner("Form only");
	Form	b;
	std::cout << b << std::endl;

	try
	{
		Form	c("error", 200, 10);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
