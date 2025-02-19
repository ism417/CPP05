/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:13:29 by eismail           #+#    #+#             */
/*   Updated: 2025/02/19 21:45:06 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name,
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

Form::Form(const Form &other) 
			:name(other.getName())
			, isSigned(other.getIsSigned())
			, reqSign(other.getReqSign())
			, execSign(other.getExecSign()){}

Form& Form::operator=(const Form &other)
{
	if (this != &other)
	{
		isSigned = other.isSigned;
	}
	return (*this);
}

const std::string Form::getName() const
{
	return this->name;
}
bool Form::getIsSigned() const
{
	return this->isSigned;
}
int Form::getReqSign() const
{
	return this->reqSign;
}
int Form::getExecSign() const
{
	return this->execSign;
}

void Form::beSigned(Bureaucrat maggot)
{
	if (maggot.getGrade() <= this->reqSign)
	{
		this->isSigned = true;
	}
	else
	{
		throw (GradeTooLowException());
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	std::cout << "Form name " << form.getName() << ", Situation "; 
	if (form.getIsSigned() == true)
		std::cout << "signed ";
	else
		std::cout << "not signed"; 
	std::cout << ", Grade required to sign it " << form.getReqSign() << ", Grade required to execute it "
	<< form.getExecSign();
	return out;
}

Form::~Form(){}