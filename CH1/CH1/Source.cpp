#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>


bool isUniqueChar(std::string str)
{
	// Max of 256 chars in ascii
	if (str.size() > 256)
		return false;

	// Initializing bool arr to false
	bool str_chars[256] = {};
	int i = 0;
	int curr_character = 0;

	do 
	{
		int curr_character = atoi(str[i]);
		str_chars[curr_character] = true;
		i++;
	} while (i < str.size() && str_chars[curr_character] != true);
}

int main()
{
	std::string word;
	std::cout << "Enter a string: ";
	std::cin >> word;
	std::cout << endl << "isUnique:" << isUniqueChar(word);
}