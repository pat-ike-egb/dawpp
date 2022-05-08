//
// Created by egbuc on 5/8/2022.
//

#include "example.h"
#include <iostream>
#include <juce_core/juce_core.h>
#include <string>

int main() {
    std::string mystr1, mystr2;
    int num1, num2;

    std::cout << "Enter first number: ";
    std::getline(std::cin, mystr1);
    std::stringstream(mystr1) >> num1;

    std::cout << "Enter second number: ";
    std::getline(std::cin, mystr2);
    std::stringstream(mystr2) >> num2;

    int maxNum = juce::jmax(num1, num2);
    std::cout << "The maximum number is: " << maxNum << std::endl;
}