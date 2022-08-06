#include <iostream>
#include <vector>
#include <algorithm>


int lonelyInteger(std::vector<int> a)
{
    std::sort(a.begin(), a.end());

    int count{};
    int uniqueVal{};

    for (int i{ 0 }; i < a.size(); ++i)
    {
        // We've checked all other elements so the last one has to be unique
        if (i == a.size() - 1)
        {
            uniqueVal = a[i];
            break;
        }

        if (count == 0)
        {
            ++count;
            continue;
        }

        else if (count == 1)
        {
            if (a[i] != a[i - 1])
            {
                uniqueVal = a[i - 1];
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