#include <iostream>
#include <bitset>

// The answer HackerRank accepts
//long flippingBits(long n)
//{
//	return (unsigned)~n;
//}

// My preferred answer

unsigned long flippingBits(long n)
{
	return ~n;
}


int main(int argc, char** argv)
{

	std::cout << flippingBits(2147483647) << std::endl;
	std::cout << flippingBits(1) << std::endl;
	std::cout << flippingBits(0) << std::endl;


	return 0;
}