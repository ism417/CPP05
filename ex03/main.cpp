/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:03:33 by eismail           #+#    #+#             */
/*   Updated: 2025/02/23 11:54:37 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try {
        Bureaucrat a("lm9adm", 4);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        if (!rrf)
            return 1;
        std::cout << *rrf <<std::endl;
        a.signAForm(*rrf);
        a.executeForm(*rrf);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
