/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:35:10 by athonda           #+#    #+#             */
/*   Updated: 2025/05/30 16:41:11 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"

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

		void		signForm(Form &form);

	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat	&operator=(Bureaucrat const &other);

	public:
		class GradeTooLowException:
			public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeTooHighException:
			public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b);