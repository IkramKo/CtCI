#include <iostream>
#include <string.h>

void reverseString(char* sentence) {
    char* endPtr = sentence;
    //pointer arithmetic?

    // Find null char
    while (*endPtr != '\0') {
        endPtr++;
    }
}

int main() {
    std::string name = "Kaeya\0";
    int n = name.length();
    char c_arr[n + 1];
    strcpy(c_arr, name.c_str());

    std::cout << strlen(c_arr) << std::endl;
}