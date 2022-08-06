#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>


int lonelyInteger(std::vector<int> a)
{
    std::sort(a.begin(), a.end());

    int count{};
    int uniqueVal{};

    for (int64_t i{ 0 }; i < a.size(); ++i)
    {
        // We've checked all other elements so the last one has to be unique
        if (i == a.size() - 1)
        {
            uniqueVal = a.at(i);
            break;
        }

        if (count == 0)
        {
            ++count;
            continue;
        }

        else if (count == 1)
        {
            if (a.at(i) != a.at(i - 1))
            {
                uniqueVal = a.at(i - 1);
                break;
            }

            else
            {
                count = 0;
            }
        }
    }

    return uniqueVal;
}

int main(int argc, char** argv)
{

    return 0;
}