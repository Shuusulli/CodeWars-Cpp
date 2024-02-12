/*
Complete the solution so that it reverses the string passed into it.
*/

#include <string>

string reverseString(string str)
{
	std::string reversed;

	for (int i = str.length() - 1; i >= 0; i--)
	{
		reversed.push_back(str[i]);
	}

	return reversed;
}

/*
more votes :

std::string reverseString(const std::string& str) {
	return std::string(str.rbegin(), str.rend());
}
*/