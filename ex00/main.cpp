/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:02:41 by athonda           #+#    #+#             */
/*   Updated: 2025/05/28 15:09:24 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	a("Kanryo", 1);

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