/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:03:33 by eismail           #+#    #+#             */
/*   Updated: 2025/02/22 11:54:55 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try {
        Bureaucrat a("lm9adm", 4);
        ShrubberyCreationForm F1("Home");
        RobotomyRequestForm F2("Library");
        PresidentialPardonForm F3("Person");
        std::cout << a << std::endl;
        a.inc();
        std::cout << a << std::endl;
        a.dec(); 
        std::cout << a << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << F1 << std::endl;
        a.signAForm(F1);
        std::cout << F1 << std::endl;
        a.executeForm(F1);
        std::cout << "---------------------------------------" << std::endl;
        std::cout << F2 << std::endl;
        a.signAForm(F2);
        std::cout << F2 << std::endl;
        a.executeForm(F2);
        std::cout << "---------------------------------------" << std::endl;
        std::cout << F3 << std::endl;
        a.signAForm(F3);
        std::cout << F3 << std::endl;
        a.executeForm(F3);
        std::cout << "---------------------------------------" << std::endl;
        // std::cout << a << std::endl; 
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
