/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:48:42 by eismail           #+#    #+#             */
/*   Updated: 2025/02/19 12:12:50 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown")
{
    this->grade = 150;
    std::cout << "Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
    std::cout << "Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

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

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    std::cout << "Copy constructor called"<< std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        grade = other.grade;
    std::cout << "Assignment copy constructor called" << std::endl;
    return *this;
}
