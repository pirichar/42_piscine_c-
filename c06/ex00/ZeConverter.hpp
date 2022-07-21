#ifndef ZECONVERTER_HPP
#define ZECONVERTER_HPP

#include <iostream>
#include <string>

class ZeConverter {
public:
    ZeConverter();
    ZeConverter(const std::string& input);
    ZeConverter(const ZeConverter& obj);
    ZeConverter& operator=(const ZeConverter& obj);
    ~ZeConverter();
    void   print_data(void) const;
    char   get_char_in(void) const;
    int    get_int_in(void) const;
    float  get_float_in(void) const;
    double get_double_in(void) const;

    void set_char_in(const std::string& in);
    void set_int_in(const std::string& in);
    void set_float_in(const std::string& in);
    void set_double_in(const std::string& in);

private:
    std::string providedInput;
    char        charInput;
    int         intInput;
    float       floatInput;
    double      doubleInput;
};

#endif