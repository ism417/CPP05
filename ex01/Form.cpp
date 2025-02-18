/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:13:29 by eismail           #+#    #+#             */
/*   Updated: 2025/02/18 13:16:59 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name,
			bool isSigned,
			const int reqSign,
			const int execSign)
			:name(name),
			isSigned(false),
			reqSign(reqSign),
			execSign(execSign){}

Form::Form():name("unknown"),
			isSigned(false),
			reqSign(1),
			execSign(1){}

const char *Form::GradeTooHighException::what() const
{
	return "Grade Too High Exception";
}
const char *Form::GradeTooLowException::what() const
{
	return "Grade Too Low Exception";
}

Form::~Form(){}