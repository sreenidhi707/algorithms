// stdafx.cpp : source file that includes just the standard includes
// Algorithms.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include <iostream>

#include "string_utilities.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

void main()
{
	std::string test_string;

	while (test_string != "end")
	{
		std::cout << "Enter a string ";
		std::cin >> test_string;

		bool palindrome = is_palindrome(test_string);
		if (palindrome)
		{
			std::cout << "String is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "String is NOT a palindrome" << std::endl;
		}
	}
	

}