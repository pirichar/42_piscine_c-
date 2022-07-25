/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZeConverter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:25:13 by pirichar          #+#    #+#             */
/*   Updated: 2022/07/25 13:28:34 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZeConverter.hpp"

#include <limits>

ZeConverter::ZeConverter()
    : input("0"),
      charInput(0),
      intInput(0),
      floatInput(0.0f),
      doubleInput(0.0),
      type(TypeChar),
      error(true){

      };

ZeConverter::ZeConverter(const std::string& input)
    : input(input),
      charInput(0),
      intInput(0),
      floatInput(0.0f),
      doubleInput(0.0),
      type(TypeChar),
      error(true) {
    parse();
};

ZeConverter::ZeConverter(const ZeConverter& obj) {
    *this = obj;
}

ZeConverter& ZeConverter::operator=(const ZeConverter& obj) {
    this->input = obj.input;
    this->charInput = obj.charInput;
    this->doubleInput = obj.doubleInput;
    this->floatInput = obj.floatInput;
    this->type = obj.type;
    this->error = obj.error;
    return *this;
}

ZeConverter::~ZeConverter() {}

// Converters
std::string ZeConverter::set_char_in() {
    if (error) {
        return ("char: impossible");
    }
    if (type == TypeFloat || type == TypeDouble) {
        if (doubleInput != doubleInput || doubleInput == std::numeric_limits<double>::infinity() ||
            doubleInput == -std::numeric_limits<double>::infinity()) {
            return "char: impossible";
        }
    }
    if (!std::isprint(static_cast<int>(charInput))) {
        return ("char : Non displayable");
    }

    std::stringstream str;
    str << "char : '" << charInput << "'";
    return str.str();
}

std::string ZeConverter::set_int_in() {
    if (error) {
        return ("int: impossible");
    }
    if (type == TypeFloat || type == TypeDouble) {
        if (doubleInput != doubleInput || doubleInput == std::numeric_limits<double>::infinity() ||
            doubleInput == -std::numeric_limits<double>::infinity()) {
            return "int: impossible";
        }
    }

    std::stringstream str;
    str << "int: " << intInput;
    return str.str();
}

std::string ZeConverter::set_float_in() {
    if (error) {
        return "float: impossible";
    }

    std::stringstream str;
    if (input == "+inf") {
        str << "float: +";
    } else {
        str << "float: ";
    }

    str << std::fixed << std::setprecision(1) << floatInput << "f";
    return str.str();
}

std::string ZeConverter::set_double_in() {
    if (error) {
        return "double: impossible";
    }

    std::stringstream str;
    if (input == "+inf") {
        str << "double: +";
    } else {
        str << "double ";
    }
    str << std::fixed << std::setprecision(1) << doubleInput;
    return str.str();
}

void ZeConverter::parse() {
    char* endPtr = NULL;
    error = false;
    // type char
    if (input.length() == 1 && std::isalpha(input[0])) {
        charInput = input[0];
        type = TypeChar;
    } else {
        // type float
        if (input.find('.') != std::string::npos || is_a_pseudo(input)) {
            if (input == "nanf" || input == "-inff" || input == "+inff") {
                input.erase(input.end() - 1);
            }
            if (input.find('.') != std::string::npos && input[input.length() - 1] == 'f') {
                type = TypeFloat;
                input.erase(input.end() - 1);
                floatInput = std::strtof(input.c_str(), &endPtr);
                // type double
            } else {
                type = TypeDouble;
                doubleInput = std::strtod(input.c_str(), &endPtr);
            }

            if (*endPtr != '\0') {
                error = true;
            }
            // type Int
        } else {
            type = TypeInt;
            intInput = static_cast<int>(std::strtol(input.c_str(), &endPtr, 10));
        }
        if (*endPtr != '\0') {
            error = true;
        }
    }

    if (!error) {
        switch (type) {
            case TypeChar: {
                intInput = static_cast<int>(charInput);
                doubleInput = static_cast<double>(charInput);
                floatInput = static_cast<float>(charInput);
                break;
            }
            case TypeInt: {
                charInput = static_cast<char>(intInput);
                doubleInput = static_cast<double>(intInput);
                floatInput = static_cast<float>(intInput);
                break;
            }
            case TypeFloat: {
                charInput = static_cast<char>(floatInput);
                intInput = static_cast<int>(floatInput);
                doubleInput = static_cast<double>(floatInput);
                break;
            }
            case TypeDouble: {
                charInput = static_cast<char>(doubleInput);
                intInput = static_cast<int>(doubleInput);
                floatInput = static_cast<float>(doubleInput);
                break;
            }
        }
    }
}

bool ZeConverter::is_a_pseudo(const std::string& str) {
    return (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" ||
            str == "nan");
}