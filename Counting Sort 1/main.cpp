#include <iostream>
#include <vector>

std::vector<int> countingSort(const std::vector<int>& arr)
{
	std::vector<int> frequencies(100, 0);

	for (int i{ 0 }; i < arr.size(); ++i)
	{
		++frequencies.at(arr.at(i));
	}

	return frequencies;
}

int main(int argc, char** argv)
{

	return 0;
}