/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:03:33 by eismail           #+#    #+#             */
/*   Updated: 2025/02/19 21:43:42 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat a("lm9adm", 19);
        Bureaucrat b("7anch", 150);
        Form F("chahatLwafat", 21, 20);
        std::cout << F << std::endl;
        // a.signForm(F);
        b.signForm(F);
        std::cout << F << std::endl;
        // a.inc();
        // std::cout << a << std::endl; 
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
