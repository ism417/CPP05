/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:03:33 by eismail           #+#    #+#             */
/*   Updated: 2025/02/19 11:49:57 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("a", 150);
        Bureaucrat b("b", 0);
        Bureaucrat c(a);
        
        c.dec();
        std::cout << c << std::endl;
        a.inc();
        std::cout << a << std::endl; 
        b.dec();
        std::cout << b << std::endl; 
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
