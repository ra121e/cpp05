/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:21:02 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 18:57:18 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class AForm;

class Intern
{
	public:
		Intern();
		Intern(Intern const &other);
		Intern	&operator=(Intern const &other);
		~Intern();

		AForm	*makeForm(std::string const &form, std::string const &target);

	private:
		struct s_formTable
		{
			std::string	formName;
			AForm	*(Intern::*func)(std::string const &target);
		};
		static struct s_formTable	formTable[3];

		AForm	*makeShrubberyCreationForm(std::string const &target);
		AForm	*makeRobotomyRequestForm(std::string const &target);
		AForm	*makePresidentialPardonForm(std::string const &target);
};