/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:22:33 by athonda           #+#    #+#             */
/*   Updated: 2025/05/28 15:39:06 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Form
{
	public:
		Form();
		Form(std::string name, int gradtosignm int gradetoexecute);
		~Form();
		int	getGrade();

	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradetosign;
		int const			_gradetoexecute;

		Form	&operator=(const Form &other);
};