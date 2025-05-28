/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:45:32 by athonda           #+#    #+#             */
/*   Updated: 2025/05/28 20:17:02 by athonda          ###   ########.fr       */
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


//		GradeTooLowException();

	private:
		std::string const	_name;
		int					_grade;

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

		Bureaucrat	&operator=(Bureaucrat const &other);
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b);