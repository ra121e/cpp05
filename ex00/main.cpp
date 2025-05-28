/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:02:41 by athonda           #+#    #+#             */
/*   Updated: 2025/05/28 13:08:29 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	a("Kanryo", 150);

	try
	{
		a.decrementGrade();
	}
	catch(Bureaucrat::BureaucratTooLowGrade &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}