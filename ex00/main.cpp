/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:02:41 by athonda           #+#    #+#             */
/*   Updated: 2025/05/30 10:59:43 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void printBanner(const std::string& title) {
	std::cout << "\n--- " << title << " ---" << std::endl;
}
int	main(void)
{
	printBanner("Initialize with too high(< 1) grade test");

	try
	{
		Bureaucrat	bu("kokkaisshu", -1);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	printBanner("Initialize with too low(>150) grade");
	try
	{
		Bureaucrat	bu2("kokkanishu", 151);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	printBanner("increment over high limit(1)");
	try
	{
		Bureaucrat	a("Kanryo", 1);
		std::cout << a << std::endl;
		a.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	printBanner("decrement over high limit(150)");
	try
	{
		Bureaucrat	a("Yakunin", 150);
		std::cout << a << std::endl;
		a.decrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}