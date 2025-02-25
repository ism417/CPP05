/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:48:42 by eismail           #+#    #+#             */
/*   Updated: 2025/02/21 12:13:46 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown")
{
    this->grade = 150;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat(){}

const std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::inc()
{
    if (this->grade == 1)
        throw GradeTooHighException();
     this->grade--;
}
void Bureaucrat::dec()
{
    if (this->grade == 150)
        throw GradeTooLowException();
     this->grade++;
}

void Bureaucrat::signAForm( AForm &F)
{
    try
    {
        F.beSigned(*this);
        std::cout << this->getName() << " signed " << F.getName() << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " couldn't sign " << F.getName() 
					<< " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too low";
}

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat &op)
{
    ostream << op.getName() << ", bureaucrat grade "<< op.getGrade();
    return ostream;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        grade = other.grade;
    return *this;
}

void Bureaucrat::executeForm(AForm const & form)
{
    try{
       form.execute(*this);
       std::cout << this->getName() << " executed " << form.getName() << std::endl; 
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() 
					<< " because " << e.what() << std::endl;
    }
}
