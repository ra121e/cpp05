/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 08:49:10 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 13:38:31 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm :
	public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

	private:


		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &other);
};