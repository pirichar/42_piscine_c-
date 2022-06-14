#include <iostream>
#include <string.h>


/*
A reference is a type of C++ variable that acts as an alias to another variable.

References are declared by using an ampersand (&) between the reference type and the variable name:

int value = 5; // normal integer
int &ref = value; // reference to variable value
In this context, the ampersand does not mean “address of”, it means “reference to”.

Note that you can’t initialize a non-const reference with a const object:
References are implicitly const
References are implicitly const. Like normal constant objects, references must be initialized:
int value = 5;
int &ref = value; // valid reference
 
int &invalidRef; // invalid, needs to reference somethingReferences must always be initialized with a valid object. Unlike pointers, which can hold a null value, there is no such thing as a null reference.

Because references are implicitly const, a reference can not be “redirected” (assigned) to another variable. Consider the following snippet:

int value1 = 5;
int value2 = 6;
int &ref = value1; // okay, ref is now an alias for value1
ref = value2; // assigns 6 (the value of value2) to value1 -- does NOT change the reference!

Let’s say we needed to work with the value1 field of the Something struct of other. 
Normally, we’d access that member as other.something.value1. 
If there are many separate accesses to this member, the code can become messy. 
References allow you to more easily access the member:

int &ref = other.something.value1;
// ref can now be used in place of other.something.value1

The following two statements are thus identical:

other.something.value1 = 5;
ref = 5;

References vs pointers
Because references must be initialized to valid objects and can not be changed once set, 
references are generally much safer to use than pointers. 
However, they are also a bit more limited in functionality.
If a given task can be solved with either a reference or a pointer, 
the reference should generally be preferred. 
Pointers should only be used in situations where references are not sufficient (such as dynamically allocating memory).
*/

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "this is the address of string = " << &string << std::endl;
	std::cout << "this is the address of stringPTR = " << &stringPTR << std::endl;
	std::cout << "this is the address of stringREF = "  << &stringREF << std::endl;

	std::cout << std::endl << "this is string = " << string << std::endl;
	std::cout << "this is stringPTR = " << stringPTR << std::endl;
	std::cout << "this is stringREF = "  << stringREF << std::endl;
}