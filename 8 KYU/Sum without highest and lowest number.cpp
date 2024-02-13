/*
Task

Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.
Example

{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6

Input validation

If an empty value ( null, None, Nothing etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.

*/

#include<vector>
#include <algorithm>

int sum(std::vector<int> numbers)
{
	int x = 0;

	if (numbers.size() > 3) {
		std::sort(numbers.begin(), numbers.end());
		numbers.erase(numbers.begin());
		numbers.pop_back();
		for (int i = 0; i < numbers.size(); i++) {
			x += numbers[i];
		}
		return x;
	}
	return 0;
}

/*
more votes :

#include <vector>
using namespace std;

int sum(vector<int> numbers)
{
	if (numbers.size() < 2) return 0;
	int sum = 0;
	int low = numbers[0], high = numbers[0];
	for (int n : numbers) {
	  if (n < low) low = n;
	  else if (n > high) high = n;
	  sum += n;
	}
	return sum - high - low;
}
*/