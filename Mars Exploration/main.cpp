#include <iostream>
#include <string>

int marsExploration(const std::string& s)
{
	int count{ 0 };
	int idx{ 0 };
	for (int i{ 0 }; i < s.size() / 3; ++i)
	{
		for (int j{ 0 }; j < 3; ++j)
		{
			if (j == 0 || j == 2)
			{
				if (s[idx] != 'S')
				{
					++count;
				}				
			}

			else if (j == 1)
			{
				if (s[idx] != 'O')
				{
					++count;
				}
			}

			++idx;
		}
	}

	return count;
}

int main(int argc, char** argv)
{

	std::cout << marsExploration("SOSOSOSOSDSDSKWOSDOSDOASDOASDFAFJDFDOSOSOWNSOSOSNDSKDDOSOSOSJDSDSOOSOSDSDOSASSOASDSAOSOSODSDSOASDWS");

	return 0;
}