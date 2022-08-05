#include <iostream>
#include <vector>
#include <algorithm>

int findMedian(std::vector<int> arr)
{
	std::sort(arr.begin(), arr.end());

	return arr[arr.size() / 2];
}

int main(int argc, char** argv)
{

	std::cout << findMedian(std::vector<int>{0, 1, 2, 4, 6, 5, 3});

	return 0;
}