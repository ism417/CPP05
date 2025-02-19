/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:26:08 by eismail           #+#    #+#             */
/*   Updated: 2025/02/19 21:29:03 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int reqSign;
		const int execSign;
	public:
		Form(const std::string name, const int reqSign, const int execSign);
		Form();
		~Form();
		Form(const Form &other);
		Form& operator=(const Form &other);
		void beSigned(Bureaucrat maggot);
		const std::string getName() const;
		bool getIsSigned() const;
		int getReqSign() const;
		int getExecSign() const;
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		
};

std::ostream &operator<<(std::ostream &out, const Form &form);