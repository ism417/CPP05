/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:03:33 by eismail           #+#    #+#             */
/*   Updated: 2025/02/22 11:58:19 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat a("lm9adm", 19);
        Form F("chahatLwafat", 21, 20);
        std::cout << "---------------------------------------" << std::endl;
        std::cout << a << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << F << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        a.signForm(F);
        std::cout << "---------------------------------------" << std::endl;
        std::cout << F << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
