// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program calculate math
// operation based on user's choice.

#include <iostream>
using std::string;

// Defining the function that returns the percentage
float Calculator(string sign, float first_dec, float second_dec ) {
       if (sign == "+") {
              return first_dec + second_dec;
       } else if (sign == "-") {
              return first_dec - second_dec;
       } else if (sign == "*") {
              return first_dec * second_dec;
       } else {
              return first_dec / second_dec;
       }
}

int main() {
       // Declaring variables
       std::string signInput, firstInput, secondInput;
       float firstNum, secondNum, result;

       // input
       std::cout << "Enter the sign of the operation";
       std::cout << "(ex: +, -, *, /): ";
       std::cin >> signInput;
       std::cout << "Enter the first number: ";
       std::cin >> firstInput;
       std::cout << "Enter the second number: ";
       std::cin >> secondInput;

       try {
              // Convert the numbers to floats
              firstNum = std::stof(firstInput);
              secondNum = std::stof(secondInput);

       if (signInput == "+" || signInput == "-" || signInput == "*"
       || signInput == "/" || signInput == "%") {
       result = Calculator(signInput, firstNum, secondNum);
       // Displaying the result
       std::cout << "The result of " << firstNum << " " << signInput;
       std::cout << " " << secondNum << " is " << result << ".\n";

              } else {
              std::cout << "Invalid input.";
              std::cout << "Please enter a sign such as (+, -, *, /).\n";
              }
       }catch (std::invalid_argument) {
              std::cout << "Invalid Input. Please enter";
              std::cout << "a proper value.\n";
       }
}
