#pragma once
#include <iostream>

template <typename T>
void iter(T* arr, std::size_t size, void (*func)(const T&)){
	for (size_t i = 0; i < size; i++){
		func(arr[i]);
	}
}

template <typename T>
void	print_T(const T& to_print){
	std::cout << to_print << std::endl;
}