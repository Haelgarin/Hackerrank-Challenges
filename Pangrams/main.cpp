#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string pangrams(std::string s)
{
	std::vector<int> letterCount(26, 0);
	std::for_each(s.begin(), s.end(), [](char& c) { c = std::toupper(c); });
	
	for (const auto& c : s)
	{
		if (c == 32) // Space character
		{
			continue;
		}

		int idx{ c - 65 };
		++letterCount[idx];
	}

	for (const auto& count : letterCount)
	{
		if (count == 0)
		{
			return "not pangram";
		}
	}

	return "pangram";
}

int main(int argc, char** argv)
{

	std::cout << pangrams("We promptly judged antique ivory buckles for the next prize") << std::endl; // pangram
	std::cout << pangrams("We promptly judged antique ivory buckles for the prize") << std::endl; // not pangram - no 'X'

	return 0;
}