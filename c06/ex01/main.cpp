/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:13:15 by pirichar          #+#    #+#             */
/*   Updated: 2022/07/25 14:13:16 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct {
    const char* name;
    size_t      address;
} Data;

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main() {
	Data data = {"Pier-Luc", 7920};
	uintptr_t raw = serialize(&data);
	Data*	dataPtr = deserialize(raw);

	std::cout << "Raw number = " << raw << std::endl;
	std::cout << "Data name = " << data.name << std::endl;
	std::cout << "DataPtr name = " << dataPtr->name << std::endl;
	std::cout << "Data address = " << data.address << std::endl;
	std::cout << "DataPtr address = " << dataPtr->address << std::endl;
	std::cout << "This is the adress of data = " << &data << std::endl;
	std::cout << "This is where dataPtr points = " << dataPtr << std::endl;
}