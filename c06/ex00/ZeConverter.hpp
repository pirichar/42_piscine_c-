#ifndef ZECONVERTER_HPP
#define ZECONVERTER_HPP

#include <iostream>

class ZeConverter {
public:
    ZeConverter();
    ZeConverter(const std::string& input);
    ZeConverter(const ZeConverter& obj);
    ZeConverter& operator=(const ZeConverter& obj);
    ~ZeConverter();

private:
    char   charInput;
    int    intInput;
    float  floatInput;
    double doubleInput;
};

#endif