/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:03:33 by eismail           #+#    #+#             */
/*   Updated: 2025/02/23 10:25:41 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("a", 150);
        Bureaucrat b("b", 1);
        
        std::cout << "---------------------------------------" << std::endl;
        std::cout << a << std::endl; 
        a.inc();
        std::cout << a << std::endl; 
        std::cout << "---------------------------------------" << std::endl;
        std::cout << b << std::endl; 
        b.dec();
        std::cout << b << std::endl; 
        std::cout << "---------------------------------------" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
