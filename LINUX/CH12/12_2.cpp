#include <iostream>
#include <string.h>

int main() {
    std::string name = "Kaeya\0";
    int n = name.length();
    char c_arr[n + 1];
    strcpy(c_arr, name.c_str());

    std::cout << strlen(c_arr) << std::endl;
}