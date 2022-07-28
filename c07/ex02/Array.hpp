#include <iostream>

template <class T>
class Array {
public:
    Array() : elems(new T[0]), _size(0){};
    Array(unsigned int n) : elems(new T[n]), _size(n){};
    Array(const Array& obj) : elems(NULL) {*this = obj; };
    const Array& operator=(const Array& obj);
    ~Array() {delete[] elems;};
	unsigned int size() const{ return _size;};

private:
    T*           elems;  // pointeur qui va contenir la memoire de mon array quand je vais le creer
    unsigned int _size;
};