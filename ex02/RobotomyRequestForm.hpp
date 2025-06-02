/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 08:43:59 by athonda           #+#    #+#             */
/*   Updated: 2025/06/02 09:12:20 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class RobotomyRequestForm:
	public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor) const;
	private:
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &other);
};