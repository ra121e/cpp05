/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:45:32 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 10:52:06 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat
{
	public:
		std::string	&getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

	private:
		std::string	_name;
		int			_grade;
};