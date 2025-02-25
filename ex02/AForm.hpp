/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:26:08 by eismail           #+#    #+#             */
/*   Updated: 2025/02/20 11:52:27 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int reqSign;
		const int execSign;
	public:
		AForm(const std::string name, const int reqSign, const int execSign);
		AForm();
		~AForm();
		AForm(const AForm &other);
		AForm& operator=(const AForm &other);
		void beSigned(Bureaucrat maggot);
		const std::string getName() const;
		bool getIsSigned() const;
		int getReqSign() const;
		int getExecSign() const;
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormNotSigned : public std::exception
        {
			public:
            	virtual const char* what() const throw();
        };
		virtual void execute(Bureaucrat const & executor) const = 0;
		void ExecuteCanHe(Bureaucrat const executor) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);