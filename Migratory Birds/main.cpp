#include <iostream>
#include <vector>
#include <algorithm>

int migratoryBirds(std::vector<int> arr)
{
	std::sort(arr.begin(), arr.end());

	std::vector<int> freqs(arr.at(arr.size() - 1), 0); 

	for (size_t i{ 0 }; i < arr.size(); ++i)
	{
		++(freqs.at(static_cast<size_t>(arr.at(i) - 1)));
	}

	int idx{ 0 };
	int tempMax{ 0 };

	for (size_t i { 0 }; i < freqs.size(); ++i)
	{
		if (freqs.at(i) > tempMax)
		{
			tempMax = freqs.at(i);
			idx = static_cast<int>(i) + 1;
		}
	}

	return idx;
}

int main(int argc, char** argv)
{

	std::cout << migratoryBirds(std::vector<int>{ 1, 1, 2, 2, 3 }) << std::endl;

	return 0;
}