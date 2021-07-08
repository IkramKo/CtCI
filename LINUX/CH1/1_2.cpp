/*
    Check Permutation:
    Given 2 strings, write a method to decide is one is a permutation of the other.

    Notes:
    1. Check size.
    2. Count instances of each letter?
    Seems like a good start but could be better i think. Let's just start with that for now and optimize as we go.
    But if I use an array, 1st row: letters, 2nd: count variable... Do I have to init for every letter? Should I go for a linked list
    instead? But then I'd have to compare every node I dont have the same access than I do with an array... OMFG NVM IM SO STUPID WTF... Wow you can tell I was distracted damn...

    WAIT NO WHAT ABT A SORT INSTEAD!! 
*/

#include <iostream>
#include <string.h>
#include<bits/stdc++.h>

bool checkPermutation(std::string firstString, std::string secondString)
{
    if(firstString.size() != secondString.size())
        return false;
    
    // But then If I sort them, I think it would be safer to pass by value instead of reference to not affect the og ones.
    sort(firstString.begin(), firstString.end());
    sort(secondString.begin(), secondString.end());

    /*
    for(int i = 0; i < firstString.size(); i++)
    {
        if(firstString[i] != secondString[i])
            return false;
    }
    */

    return !firstString.compare(secondString); // If compare returns 0 then true.
}

int main()
{
    std::string firstString, secondString;

    std::cout << "Enter first string: ";
    std::cin >> firstString;
    std::cout << std::endl;

    std::cout << "Enter second string: ";
    std::cin >> secondString;
    std::cout << std::endl;

    std::cout << "Result: " << checkPermutation(firstString, secondString) << std::endl;

}