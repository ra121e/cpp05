/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:45:32 by athonda           #+#    #+#             */
/*   Updated: 2025/05/24 21:08:37 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();

		std::string	const	&getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

	private:
		std::string const	_name;
		int					_grade;

		Bureaucrat	&operator=(Bureaucrat const &other);
};