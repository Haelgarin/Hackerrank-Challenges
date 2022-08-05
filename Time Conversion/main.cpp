#include <iostream>
#include <sstream>
#include <string>

std::string timeConversion(const std::string& s)
{
    std::string postfix = s.substr(s.length() - 2, s.length() - 1); // Get the AM/PM postfix
    std::string sMinusPostfixAndHour = s.substr(2, s.length() - 4);
    std::string hourStr = s.substr(0, 2);
    int hour;

    std::stringstream ss;
    ss << hourStr;
    ss >> hour;

    if ((hour == 12) && (postfix == "AM"))
    {
        hour -= 12;
    }

    else if (((hour >= 1) && (hour < 12)) && postfix == "PM")
    {
        hour += 12;
    }

    hourStr = "";

    if (hour < 10)
    {
        hourStr.append("0");
    }

    hourStr += std::to_string(hour);

    return hourStr + sMinusPostfixAndHour;
}

int main(int argc, char** argv)
{

	return 0;
}