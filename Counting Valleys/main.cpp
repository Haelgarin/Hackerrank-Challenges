#include <iostream>
#include <string>

// I don't see the point of passing steps in as a parameter when we can just get that information from "path"
// But thats the function signature on HackerRank
int countingValleys(int steps, const std::string& path)
{
    int height{ 0 };
    int valleys{ 0 };

    for (int i{ 0 }; i < steps; ++i)
    {
        if (path.at(i) == 'U')
        {
            if (height == -1)
            {
                ++valleys;
            }

            ++height;
        }

        else if (path.at(i) == 'D')
        {
            --height;
        }
    }

    return valleys;
}

int main(int argc, char** argv)
{
    std::cout << countingValleys(8, "UDDDUDUU");

    return 0;
}
