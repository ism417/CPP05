/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:28:08 by eismail           #+#    #+#             */
/*   Updated: 2025/02/22 19:30:50 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(Intern const &other)
{
    *this = other;
}
Intern& Intern::operator=(Intern const &other)
{
    (void) other;
    return (*this);
}
AForm *Intern::makeForm(std::string type, std::string target)
{
    std::string FormName[3];
    FormName[0] = "presidential pardon";
    FormName[1] = "shrubbery creation";
    FormName[2] = "robotomy request";
    
    typedef AForm *(Intern::*f)(std::string);
    f FormType[3];
    FormType[0] = &Intern::presidential_pardon_form;
    FormType[1] = &Intern::shrubbery_creation_form;
    FormType[2] = &Intern::robotomy_request_form;
    for (size_t i = 0; i < 3; i++)
    {
        if (type.compare(FormName[i]) == 0)
        {
            std::cout << "Intern creates "<< type << std::endl;
            return (this->*FormType[i])(target);
        }
    }
    std::cout << "Intern cannot create " << type << "form." << std::endl;
    return NULL;
}

AForm* Intern::presidential_pardon_form( std::string target )
{
    return new PresidentialPardonForm(target);
}
AForm* Intern::robotomy_request_form( std::string target )
{
    return new RobotomyRequestForm(target);
}
AForm* Intern::shrubbery_creation_form( std::string target )
{
    return new ShrubberyCreationForm(target);
}