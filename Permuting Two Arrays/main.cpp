#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string twoArrays(int k, std::vector<int> A, std::vector<int> B)
{
	std::sort(A.begin(), A.end()); // ascending order
	std::sort(B.rbegin(), B.rend()); // descending order

	for (int i{ 0 }; i < A.size(); ++i)
	{
		if (A.at(i) + B.at(i) < k)
		{
			return "NO";
		}
	}

	return "YES";
}

int main(int argc, char** argv)
{


	return 0;
}