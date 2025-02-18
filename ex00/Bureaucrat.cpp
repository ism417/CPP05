/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:48:42 by eismail           #+#    #+#             */
/*   Updated: 2025/02/18 11:22:12 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "unknown";
    this->grade = 150;
    std::cout << "Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->name = name;
    if (grade > 150)
        throw GradeTooHighException();
    if (grade < 0)
        throw GradeTooLowException();
    this->grade = grade;
    std::cout << "Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::inc()
{
    if (this->grade == 0)
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
    {
        name = other.name;
        grade = other.grade;
    }
    std::cout << "Assignment copy constructor called" << std::endl;
    return *this;
}
