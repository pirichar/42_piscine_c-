#ifndef ZECONVERTER_HPP
#define ZECONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <iomanip>


class ZeConverter {
public:
    ZeConverter();
    ZeConverter(const std::string& input);
    ZeConverter(const ZeConverter& obj);
    ZeConverter& operator=(const ZeConverter& obj);
    ~ZeConverter();

    std::string set_char_in();
    std::string set_int_in();
    std::string set_float_in();
    std::string set_double_in();

private:
    enum NumType {TypeChar, TypeInt, TypeFloat, TypeDouble};
    std::string input;
    char        charInput;
    int         intInput;
    float       floatInput;
    double      doubleInput;
    NumType     type;
    bool        error;
    void        parse();
    bool        is_a_pseudo(const std::string& str);
};

#endif