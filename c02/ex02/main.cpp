#include "Fixed.hpp"
#include <iomanip>


int main( void ) {
	
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(5.05f) / Fixed(2));
	Fixed       d(c);
	Fixed		e(10.22f);
	Fixed		f(21.65f);
	Fixed		g(45.5f);
	Fixed		h(2070.25f);

	std::cout << "This is a = " << a << std::endl;
	std::cout << "This is b = " << b << std::endl;
	std::cout << "This is c = " << c << std::endl;
	std::cout << "This is d = " << d << std::endl;
	std::cout << "This is e = " << e << std::endl;
	std::cout << "This is f = " << f << std::endl;
	std::cout << "This is g = " << g << std::endl;
	std::cout << "This is h = " << h << std::endl;
	std::cout << std::endl;

	std::cout << "This is a before ++a = " << a << std::endl;
	std::cout << "This is a during ++a = " << ++a << std::endl;
	std::cout << "This is a after ++a = " << a << std::endl;
	std::cout << "This is a during a++ = " << a++ << std::endl;
	std::cout << "This is a after a++ = " << a << std::endl;
	std::cout << "This is a during --a = "<< --a << std::endl;
	std::cout << "This is a after --a = " << a << std::endl;
	std::cout << "This is a during a-- = " << a-- << std::endl;
	std::cout << "This is a after a-- = " << a << std::endl;
	std::cout << std::endl;

	std::cout << "This is a = " << a << std::endl;
	std::cout << "This is b = " << b << std::endl;
	std::cout << "This is c = " << c << std::endl;
	std::cout << "This is d = " << d << std::endl;
	std::cout << "This is e = " << e << std::endl;
	std::cout << "This is f = " << f << std::endl;
	std::cout << "This is g = " << g << std::endl;
	std::cout << "This is h = " << h << std::endl;
	std::cout << std::endl;

	std::cout << "max(a,b) (should be = " << b << ") = " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a,b) (should be = " << a << ") = " << Fixed::min(a, b) << std::endl;
	std::cout << "max(b,c) (should be = " << b << ") = " << Fixed::max(b, c) << std::endl;
	std::cout << "min(b,c) (should be = " << c << ") = " << Fixed::min(b, c) << std::endl;
	std::cout << std::endl;

	/* Testing the +  -  * /    */
	std::cout << "10.22f + 9.78f 	(should be 20) = " << 10.22f + 9.78f << std::endl;
	std::cout << "e + 9.78f 	(should be 20) = " << e + Fixed(9.78f) << std::endl;
	std::cout << "21.65f - 1.65f 	(should be 20) = " << 21.65f - 1.65f << std::endl;
	std::cout << "f - 1.65f 	(should be 20) = " << f - Fixed(1.65f) << std::endl;
	std::cout << "45.5f * 45.5f 	(should be 2070.25) = " << 45.5f * 45.5f << std::endl;
	std::cout << "g * 45.5f 	(should be 2070.25) = " << g * Fixed(45.5f) << std::endl;
	std::cout << "2070.25f/45.5f  (should be 45.5) = " << 2070.25f / 45.5f << std::endl;
	std::cout << "h / 45.5f 	(should be 45.5) = " << h / Fixed(45.5f) << std::endl;
	std::cout << std::endl;

	std::cout << "This is a = " << a << std::endl;
	std::cout << "This is b = " << b << std::endl;
	std::cout << "This is c = " << c << std::endl;
	std::cout << "This is d = " << d << std::endl;
	std::cout << "This is e = " << e << std::endl;
	std::cout << "This is f = " << f << std::endl;
	std::cout << "This is g = " << g << std::endl;
	std::cout << "This is h = " << h << std::endl;
	std::cout << std::endl;

	/* testing the > < >=  <= == !=*/
	std::cout << a << " > " << b << " = " << std::boolalpha << (a > b) << '\n';
	std::cout << c << " >= " << d << " = " << std::boolalpha << (c >= d) << '\n';
    std::cout << a << " < " << b << " = " << std::boolalpha << (a < b) << '\n';
    std::cout << c << " <= " << d << " = " << std::boolalpha << (c <= d) << '\n';
    std::cout << c << " <= " << b << " = " << std::boolalpha << (c <= b) << '\n';
    std::cout << a << " == " << b << " = " << std::boolalpha << (a == b) << '\n';
    std::cout << c << " == " << d << " = " << std::boolalpha << (c == d) << '\n';
    std::cout << c << " != " << c << " = " << std::boolalpha << (c != c) << '\n';
    std::cout << f << " > " << h << " = " << std::boolalpha << (f > h) << '\n';
	std::cout << std::endl;
}