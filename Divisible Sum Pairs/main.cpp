#include <vector>
#include <iostream>

int divisibleSumPairs(int n, int k, std::vector<int> ar)
{
	int count{};

	for (int i{ 0 }; i < ar.size(); ++i)
	{
		for (int j{ i + 1 }; j < ar.size(); ++j)
		{
			if ((ar[i] + ar[j]) % k == 0)
			{
				++count;
			}
		}
	}

	return count;
}

int main(int argc, char** argv)
{
	std::cout << divisibleSumPairs(6, 3, std::vector<int>{1, 3, 2, 6, 1, 2});

	return 0;
}