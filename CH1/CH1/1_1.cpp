// set::find
/*#include <iostream>
#include <set>

int main()
{
	std::set<int> myset;
	std::set<int>::iterator it;

	// set some initial values:
	for (int i = 1; i <= 5; i++) myset.insert(i * 10);    // set: 10 20 30 40 50

	it = myset.find(20);
	myset.erase(it);
	myset.erase(myset.find(40));

	std::cout << "myset contains:";
	for (it = myset.begin(); it != myset.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <set> 


bool isUniqueArray(std::string str)
{
	// Max of 256 chars in ascii
	if (str.size() > 256)
		return false;

	// Initializing bool arr to false
	bool str_chars[256] = {}; 
	int curr_character = 0;

	for (char c: str)
	{
		curr_character = c - '0';

		if (str_chars[curr_character] == true)
			return false;

		str_chars[curr_character] = true;
	}

	return true;
}

bool isUniqueSet(std::string str)
{
	// Same as above
	if (str.size() > 256)
		return false;

	std::set<char> str_content;
	std::set<char>::iterator it = str_content.begin();

	for (char c : str)
	{
		it = str_content.find(c);

		// If char not found, it returned should be end. If not, then contained in set. Not unique.
		if (it != str.end())
			return false;
		else
			str_content.insert(c);
	}

	return true;
}

int main()
{
	std::string word;
	std::cout << "Enter a string: ";
	std::cin >> word;
	std::cout << std::endl << "isUniqueArray: " << isUniqueArray(word) << std::endl;
	std::cout << std::endl << "isUniqueSet: " << isUniqueSet(word) << std::endl;

}

/*
	Time complexity: O(n)
	Space complexity: still not sure how to calculate that...

	Notes:
		- No hashmaps in c++ so i used a set.
*/
