#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int diff = 0;
		int apples, oranges, coins;
		std::cin>>apples>>oranges>>coins;
		if(std::abs(apples - oranges) > coins)
		{
			diff = std::abs(apples - oranges) - coins;
		}
		std::cout<<diff<<"\n";
	}
}