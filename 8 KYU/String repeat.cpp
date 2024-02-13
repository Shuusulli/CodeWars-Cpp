/*
Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.
Examples (input -> output)

6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"
*/

#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
	std::string string_repeated = "";

	for (size_t i = 0; i < repeat; i++)
	{
		string_repeated.append(str);
	}

	return string_repeated;
}

/*
more votes :

#include <string>

std::string repeat_str(size_t repeat, const std::string& str)
{
  std::string ret = "";
  while(repeat--)
	ret += str;
  return ret;
}
*/