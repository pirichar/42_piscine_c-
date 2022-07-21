#include "ZeConverter.hpp"

ZeConverter::ZeConverter(){

};

ZeConverter::ZeConverter(const std::string& input)
    : providedInput(input){

      };

ZeConverter::ZeConverter(const ZeConverter& obj) {
    *this = obj;
}

ZeConverter& ZeConverter::operator=(const ZeConverter& obj) {
    return *this;
}

ZeConverter::~ZeConverter() {}

//getters
char ZeConverter::get_char_in(void) const {

	return this->charInput;
}
int ZeConverter::get_int_in(void) const {

	return this->intInput;
}
float ZeConverter::get_float_in(void) const {

	return this->floatInput;
}
double ZeConverter::get_double_in(void) const {

	return this->doubleInput;
}

//setters
void	set_char_in(const std::string& in){
	
}
void ZeConverter::print_data() const {}