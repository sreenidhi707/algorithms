#pragma once

#ifndef _TEST_FUNCTIONS_H_
#define _TEST_FUNCTIONS_H_

#include "string_utilities.h"
#include <iostream>

void test_string_palindrome()
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

#endif

