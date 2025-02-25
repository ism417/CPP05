/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:13:29 by eismail           #+#    #+#             */
/*   Updated: 2025/02/19 21:45:06 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name,
			const int reqSign,
			const int execSign)
			:name(name),
			isSigned(false),
			reqSign(reqSign),
			execSign(execSign){}

AForm::AForm():name("unknown"),
			isSigned(false),
			reqSign(1),
			execSign(1){}

AForm::AForm(const AForm &other) 
			:name(other.getName())
			, isSigned(other.getIsSigned())
			, reqSign(other.getReqSign())
			, execSign(other.getExecSign()){}

AForm& AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		isSigned = other.isSigned;
	}
	return (*this);
}

const std::string AForm::getName() const
{
	return this->name;
}
bool AForm::getIsSigned() const
{
	return this->isSigned;
}
int AForm::getReqSign() const
{
	return this->reqSign;
}
int AForm::getExecSign() const
{
	return this->execSign;
}

void AForm::beSigned(Bureaucrat maggot)
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

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}
const char* AForm::FormNotSigned::what() const throw()
{
    return "Form Not Signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm)
{
	std::cout << "AForm name " << AForm.getName() << ", Situation "; 
	if (AForm.getIsSigned() == true)
		std::cout << "signed ";
	else
		std::cout << "not signed"; 
	std::cout << ", Grade required to sign it " << AForm.getReqSign() << ", Grade required to execute it "
	<< AForm.getExecSign();
	return out;
}

void AForm::ExecuteCanHe(Bureaucrat const executor) const
{
	if (this->getIsSigned() == false )
        throw (FormNotSigned());
    else if (executor.getGrade() > this->getExecSign())
        throw (GradeTooLowException());
}

AForm::~AForm(){}