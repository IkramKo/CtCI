#include <stdio.h>
#include <string>
#include <iostream>

bool isUniqueString(std::string inputString) {
    const int MAX_CHARS_ASCII = 256;

    if(inputString.length() >= MAX_CHARS_ASCII) {
        return false;
    }

    bool charList[MAX_CHARS_ASCII] = { false };
    for (char letter : inputString) {
        int index = letter - '0';

        if(charList[index]) {
            return false;
        }

        charList[index] = true;
    }
    
    return true;
}

int main() {
    std::string inputString;
    std::cout << "Enter the string to verify: ";
    std::cin >> inputString;

    std::cout << std::boolalpha << "String is unique: " << isUniqueString(inputString) << std::endl;
    
}