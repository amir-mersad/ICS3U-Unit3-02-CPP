// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if there are more than 30 students

#include <iostream>

int main() {
    // This function checks if there are more than 30 students
    const int MAX_STUDENT_NUMBER = 30;
    int number_Of_Students;

    // Input
    std::cout << "Enter number of students: " << std::endl;
    std::cin >> number_Of_Students;
    std::cout << "" << std::endl;

    // Process
    if (number_Of_Students > MAX_STUDENT_NUMBER) {
        // Output
        std::cout << "Too many students!" << std::endl;
    }
}
