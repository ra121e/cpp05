/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 08:25:03 by athonda           #+#    #+#             */
/*   Updated: 2025/05/29 09:21:24 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Form	a("Shinseisho", 20, 100);
	std::cout << a << std::endl;

	return (0);
}
