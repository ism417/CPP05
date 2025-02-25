/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:09:41 by eismail           #+#    #+#             */
/*   Updated: 2025/02/23 10:21:21 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Intern(Intern const &other);
    Intern& operator=(Intern const &other);
    AForm* makeForm(std::string type, std::string target);
    AForm* presidential_pardon_form( std::string target );
    AForm* robotomy_request_form( std::string target );
    AForm* shrubbery_creation_form( std::string target );
};