#include <iostream>

int main() 
{
	int tc;
	int divisor;
	int dividend;
	int divisiblecount = 0;

	std::cin>>tc>>divisor;

	while(tc--)
	{
		std::cin>>dividend;
		if(dividend % divisor == 0) divisiblecount++; 
	}

	std::cout<<divisiblecount;
	return 0;
}