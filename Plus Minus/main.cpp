#include <iostream>
#include <vector>
#include <iomanip>

void plusMinus(const std::vector<int>& arr)
{
	double positives{};
	double negatives{};
	double zeros{};

	for (const auto& num : arr)
	{
		if (num > 0) ++positives;

		else if (num < 0) ++negatives;

		else ++zeros;
	}

	std::cout << std::fixed << std::setprecision(6);

	std::cout << positives / arr.size() << std::endl;
	std::cout << negatives / arr.size() << std::endl;
	std::cout << zeros / arr.size() << std::endl;
}

int main(int argc, char** argv)
{

	plusMinus(std::vector<int>{ -4, 3, -9, 0, 4, 1 });

	return 0;
}