// Copyright (c) 2025 Angel rights reserved.
// Created by: Angel
// Created on: March27,2025
// This program calculates base raised to an exponent using input from the user.

#include <iostream>  // this library will input and output

int calculatePower(int base, int exponent) {
    int result = 1;
    for (int counter = 0;
         counter < exponent;
          counter++) {
        result = result * base;
    }
    return result;
}

int main() {
    int base, exponent;
    while (true) {
        try {
            std::cout << "Enter the base: ";
            std::cin >> base;
            std::cout << "Enter the exponent: ";
            std::cin >> exponent;
            std::cout << std::endl;

            if (exponent < 0) {
                std::cout << "Exponent cannot be negative.\n"
                 << std::endl;
                continue;
            }

            int result = calculatePower(base, exponent);
            std::cout << base << "^" << exponent << " = " << result
             << std::endl;
            break;
        } catch (std::invalid_argument) {
            std::cout << "Invalid input. Please enter integers only.\n";
        }
    }
    return;
}
