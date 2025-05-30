/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 08:25:03 by athonda           #+#    #+#             */
/*   Updated: 2025/05/30 16:53:09 by athonda          ###   ########.fr       */
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
	std::cout << a.getSigned() << std::endl;
	std::cout << a.getGradeToSign() << std::endl;
	std::cout << a.getGradeToExecute() << std::endl;

	printBanner("Bureaucrat Form separate");
	Bureaucrat	bu("Kanri", 5);
	std::cout << bu << std::endl;
	a.beSigned(bu);
	std::cout << a.getSigned() << std::endl;

	printBanner("Bureaucrat signs Form");
	Bureaucrat	bu2("Kangan", 4);
	std::cout << bu2 << std::endl;
	Form	f("visa", 2, 2);
	std::cout << f << std::endl;

	bu2.signForm(f);

	printBanner("Form only");
	Form	b;
	std::cout << b << std::endl;
	std::cout << b.getSigned() << std::endl;
	std::cout << b.getGradeToSign() << std::endl;
	std::cout << b.getGradeToExecute() << std::endl;

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
