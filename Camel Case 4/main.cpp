#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
    string input = "";
    while (std::getline(cin, input))
    {
        if (input.at(0) == 'S') // Split operation
        {

            string words = "";

            if (input.at(2) == 'M')
            {
                for (int i = 4; i < input.size() - 2; ++i)
                {
                    if (isupper(input.at(i)))
                    {

                        words += " ";
                        words += tolower(input.at(i));
                    }
                    else
                    {
                        words += input.at(i);
                    }
                }
            }

            else if (input.at(2) == 'C' || input.at(2) == 'V')
            {
                for (int i = 4; i < input.size(); ++i)
                {
                    if (isupper(input.at(i)))
                    {
                        if (i != 4)
                        {
                            words += " ";
                        }

                        words += tolower(input.at(i));
                    }

                    else words += input.at(i);
                }
            }

            cout << words << endl;
        }

        else if (input.at(0) == 'C') // Create operation
        {
            string word = "";
            bool capitalFlag = false;

            for (int i = 4; i < input.size(); ++i)
            {
                if (input.at(i) == ' ')
                {
                    capitalFlag = true;
                    continue;
                }

                else if (capitalFlag)
                {
                    word += toupper(input.at(i));
                    capitalFlag = false;
                }

                else
                {
                    word += input.at(i);
                }
            }

            if (input.at(2) == 'M')
            {
                word += "()";
            }

            else if (input.at(2) == 'C')
            {
                word.at(0) = toupper(word.at(0));
            }

            cout << word << endl;
        }
    }
    return 0;
}