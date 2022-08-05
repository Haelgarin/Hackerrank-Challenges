#include <iostream>
#include <vector>

std::vector<int> breakingRecords(const std::vector<int> &scores)
{
	std::vector<int> recordsBroken{ 0, 0 };
	int currentMinScore{ scores[0] };
	int currentMaxScore{ scores[0] };

	for (int i = 1; i < scores.size(); ++i)
	{
		if (scores[i] > currentMaxScore)
		{
			recordsBroken[0] += 1;
			currentMaxScore = scores[i];
		}

		else if (scores[i] < currentMinScore)
		{
			recordsBroken[1] += 1;
			currentMinScore = scores[i];
		}
	}

	return recordsBroken;
}

int main(int argc, char** argv)
{

	return 0;
}