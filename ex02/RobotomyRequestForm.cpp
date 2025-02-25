/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:12:57 by eismail           #+#    #+#             */
/*   Updated: 2025/02/22 11:55:12 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
                    AForm("RobotomyRequestForm", 72, 45), target("home"){}
RobotomyRequestForm::RobotomyRequestForm(std::string target) :
                    AForm("RobotomyRequestForm", 72, 45), target(target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    AForm::ExecuteCanHe(executor);
    std::cout << "Drilling noises..." <<std::endl;
    srand(time(NULL));
    if (rand() % 2)
        std::cout << target  << " has been robotomized successfully" << std::endl;
    else 
        std::cout << "The robotomy failed" << std::endl;
}