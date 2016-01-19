#include "stdafx.h"
#include "string_utilities.h"

bool is_palindrome(std::string input_string)
{
	bool is_palindrome = true;

	size_t N = input_string.length();
	for (size_t i = 0; i < N/2; i++)
	{
		if (input_string[i] != input_string[N - 1 - i])
		{
			is_palindrome = false;
			break;
		}
	}

	return(is_palindrome);
}
