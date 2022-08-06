#include <iostream>
#include <vector>

std::vector<int> gradingStudents(std::vector<int> grades)
{
    for (auto& grade : grades)
    {
        /* Grades less than 37 will still be failing grades after applying the rounding rules
         * If the grade is 100 then rounding wo'nt change the grade.
        */
        if (grade < 37 || grade == 100) continue;

        else
        {
            int nextMultipleOfFive{ (((grade / 5) + 1) * 5) };
            int gradeDifference{ nextMultipleOfFive - grade };

            if (gradeDifference < 3)
            {
                grade = ((grade / 5) + 1) * 5;
            }
        }
    }

    return grades;
}

int main(int argc, char** argv)
{
    std::vector<int> grades{ gradingStudents(std::vector<int>{ 75, 67, 38, 33 }) };

    for (const auto& grade : grades)
    {
        std::cout << grade << std::endl;
    }
}