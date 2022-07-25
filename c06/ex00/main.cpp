/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:24:58 by pirichar          #+#    #+#             */
/*   Updated: 2022/07/25 13:24:58 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZeConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Please provide only one literal to the program" << std::endl;
		return 1;
    }
    if (argv[1] == NULL) {
        std::cerr << "Please provide a literal that is not an empty string" << std::endl;
		return 1;
    }
    std::string input(argv[1]);
    if (input.empty()) {
        std::cerr << "Empty argument, please stop messing with me" << std::endl;
        return 1;
    }
    ZeConverter conv(input);

    std::cout << conv.set_char_in() << std::endl;
    std::cout << conv.set_int_in() << std::endl;
    std::cout << conv.set_float_in() << std::endl;
    std::cout << conv.set_double_in() << std::endl;
}