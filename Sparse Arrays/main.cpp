#include <iostream>
#include <vector>
#include <string>

std::vector<int> matchingStrings(const std::vector<std::string>& strings, const std::vector<std::string>& queries)
{
	int count{};
	std::vector<int> counts{};

	for (const auto& query : queries)
	{
		for (const auto& str : strings)
		{
			if (query == str)
			{
				++count;
			}
		}

		counts.push_back(count);
		count = 0;
	}

	return counts;
}

int main(int argc, char** argv)
{

	return 0;
}