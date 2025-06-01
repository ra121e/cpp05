/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 10:34:43 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 23:11:42 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute, std::string const &target);
		AForm(AForm const &other);
		virtual ~AForm();

		std::string const	&getName() const;
		std::string const	&getTarget() const;
		bool	getSigned() const;
		int	getGradeToSign() const;
		int	getGradeToExecute() const;
		void	beSigned(Bureaucrat b);

		virtual void	execute(Bureaucrat const &executor) const = 0;
		void	CheckBeforeExecute(Bureaucrat const &executor) const;

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
		class UnsignedException:
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
		std::string const	_target;

		AForm	&operator=(const AForm &other);
};

std::ostream	&operator<<(std::ostream &os, AForm const &f);
