/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:02:41 by athonda           #+#    #+#             */
/*   Updated: 2025/05/28 19:30:59 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	a("Kanryo", 1);
	std::cout << a;

	try
	{
		a.incrementGrade();
	}
	catch(Bureaucrat::ExceptionTooHighGrade &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::ExceptionTooLowGrade &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}