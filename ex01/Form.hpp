/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:22:33 by athonda           #+#    #+#             */
/*   Updated: 2025/05/31 10:48:46 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &other);
		~Form();
		std::string const	&getName() const;
		bool	getSigned() const;
		int	getGradeToSign() const;
		int	getGradeToExecute() const;
		void	beSigned(Bureaucrat b);

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
				virtual const char	*what() const throw();
		};

	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

		Form	&operator=(const Form &other);
};

std::ostream	&operator<<(std::ostream &os, Form const &f);