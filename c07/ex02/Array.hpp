#include <cstring>
#include <sstream>
#include <stdexcept>

template <class T>
class Array {
public:
    // as Asked in the subject the default constructor creates an empty array of type T
    Array() : elems(new T[0]), _size(0){};
    // as asked in the subject this is the construction with the parameter
    // it creates a new array of type T of n elems and the size is provided by the n as well
    Array(unsigned int n) : elems(new T[n]), _size(n){};
    // this puts the pointer elems of the copied array at nulls
    // it then gets it from *this
    Array(const Array& obj) : elems(NULL) { *this = obj; };
    // For the = overload we need to delete the allready allocated elems
    // then copy everything from the obj to the reciever array
    // we use the function size to access the size of the elems
    // we then use memcpy to copy the memory from the obj.elems
    // to our new elems by calling the size of the obj on the sizeof T
    // this way we make sure we copy the whole obj into the elems
    // we finaly return *this as always for the = operator
    const Array& operator=(const Array& obj) {
        delete[] elems;
        _size = obj.size();
        elems = new T[obj.size()];
        std::memcpy(elems, obj.elems, obj.size() * sizeof(T));
        return *this;
    }
    // the destructor free the memories at the end
    // delete [] deletes the whole array
    ~Array() { delete[] elems; };
    // the asked function size that return the size as an unsigned int
    unsigned int size() const { return _size; };
    // here we overload the [] operator to be able to access
    // the element at a certain index with the []
    // first we check if the provided unsigned int is valid
    // if its not we create a string stream class and pass it to
    //      std::out_of_range using the str public member function of ss
    //  if not we just return the elems at the given index
    T& operator[](unsigned int index) {
        if (index >= size()) {
            std::stringstream ss;
            ss << "Can't access index" << index << std::endl;
            throw std::out_of_range(ss.str());
        }
        return elems[index];
    }

private:
    T*           elems;  // pointeur qui va contenir la memoire de mon array quand je vais le creer
    unsigned int _size;
};