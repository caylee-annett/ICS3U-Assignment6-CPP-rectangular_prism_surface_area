// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program calculates the surface area of a rectangular prism

#include <iostream>
#include <string>

int SurfaceAreaCalculation(int length, int width, int height) {
    // This function calculates the surface area
    int surfaceArea;

    surfaceArea = 2 * (length * width + length * height + width * height);

    return surfaceArea;
}


main() {
    // This function gets the length, width, and height
    std::string lengthInputString;
    int lengthInputInteger;
    std::string widthInputString;
    int widthInputInteger;
    std::string heightInputString;
    int heightInputInteger;
    int calculatedSurfaceArea;

    // Input
    std::cout << "This program calculates the surface area of a rectangular "
        "prism." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the length (cm): ";
    std::cin >> lengthInputString;
    std::cout << "Enter the width (cm): ";
    std::cin >> widthInputString;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightInputString;

    // Process
    while (true) {
        try {
            lengthInputInteger = std::stoi(lengthInputString);

            if (lengthInputInteger > 0) {
                break;
            } else {
                std::cout << lengthInputInteger << " is not a positive "
                    "integer. Enter the length (cm): ";
                std::cin >> lengthInputString;
            }
        } catch (std::invalid_argument) {
                std::cout << lengthInputString << " is not a valid input. "
                    "Enter the length (cm): ";
                std::cin >> lengthInputString;
        }
    }
    while (true) {
        try {
            widthInputInteger = std::stoi(widthInputString);

            if (widthInputInteger > 0) {
                break;
            } else {
                std::cout << widthInputInteger << " is not a positive "
                    "integer. Enter the width (cm): ";
                std::cin >> widthInputString;
            }
        } catch (std::invalid_argument) {
                std::cout << widthInputString << " is not a valid input. "
                    "Enter the width (cm): ";
                std::cin >> widthInputString;
        }
    }
    while (true) {
        try {
            heightInputInteger = std::stoi(heightInputString);

            if (heightInputInteger > 0) {
                break;
            } else {
                std::cout << widthInputInteger << " is not a positive "
                    "integer. Enter the height (cm): ";
                std::cin >> heightInputString;
            }
        } catch (std::invalid_argument) {
                std::cout << heightInputString << " is not a valid input. "
                    "Enter the height (cm): ";
                std::cin >> heightInputString;
        }
    }

    // Call functions
    calculatedSurfaceArea = SurfaceAreaCalculation(lengthInputInteger,
                                                   widthInputInteger,
                                                   heightInputInteger);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The surface area of a rectangular prism with dimensions "
        << lengthInputInteger << " cm x " << widthInputInteger << " cm x "
        << heightInputInteger << " cm is " << calculatedSurfaceArea << " cm²."
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
