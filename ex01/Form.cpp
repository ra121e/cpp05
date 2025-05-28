/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:39:21 by athonda           #+#    #+#             */
/*   Updated: 2025/05/28 15:46:41 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{}

Form::Form(std::string name, int gradetosign, int gradetoexecute) :
	_name(name),
	_gradetosign(gradetosign),
	_gradetoexecute(gradetoexecute)
{}

Form::~Form()
{}
