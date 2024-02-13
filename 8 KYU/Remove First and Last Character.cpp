/*
It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the original string.You don't have to worry about strings with less than two characters.
*/

#include <string>

std::string sliceString(std::string str)
{
	str.pop_back();
	str.erase(str.begin());
	return str;
}

/*
more votes : 

#include <string>
using namespace std;

string sliceString (string str ){
  return str.substr(1, str.size() - 2);
}
*/