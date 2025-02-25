/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:51:15 by eismail           #+#    #+#             */
/*   Updated: 2025/02/22 10:28:50 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
                        AForm("ShrubberyCreationForm", 145, 137),
                        target("unknown"){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
                        AForm("ShrubberyCreationForm", 145, 137),
                        target(target){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    AForm::ExecuteCanHe(executor);
    std::ofstream file;
    file.open(target + "_shrubbery");
    file << "                     . . .\n"
            << "       .        .  .     ..    .\n"
            << "    .                 .         .  .\n"
            << "                 .\n"
            << "               .                ..\n"
            << ".          .            .              .\n"
            << ".            '.,        .               .\n"
            << "  .              'b      *\n"
            << "   .              '$    #.                ..\n"
            << "  .    .           $:   #:               .\n"
            << "..      .  ..      *#  @):        .   . .\n"
            << "             .     :@,@):   ,.**:'   .\n"
            << " .      .,         :@@*: ..**'      .   .\n"
            << "          '#o.    .:(@'.@*'  .\n"
            << "  .  .       'bq,..:,@@*'   ,*      .  .\n"
            << "             ,p$q8,:@)'  .p*'      .\n"
            << "      .     '  . '@@Pp@@*'    .  .\n"
            << "       .  . ..    Y7'.'     .  .\n"
            << "                 :@):.\n"
            << "                .:@:'.\n"
            << "              .::(@:.\n";
    file.close();
}