/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:33:00 by eismail           #+#    #+#             */
/*   Updated: 2025/02/22 11:40:27 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
                        AForm("PresidentialPardonForm", 25, 5), target("home") {}
PresidentialPardonForm::PresidentialPardonForm(std::string target):
                        AForm("PresidentialPardonForm", 25, 5), target(target){}
PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    AForm::ExecuteCanHe(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}