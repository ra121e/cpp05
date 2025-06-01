/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 10:34:43 by athonda           #+#    #+#             */
/*   Updated: 2025/06/01 13:34:35 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const &other);
		~AForm();
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

		AForm	&operator=(const AForm &other);
};

std::ostream	&operator<<(std::ostream &os, AForm const &f);
