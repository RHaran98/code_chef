#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n;
		std::cin>>n;
		int levels = (n - (n % 2 + 2)) / 2
		if(levels < 1)
		{
			std::cout<<0<<"\n";
		}
		else
		{
			std::cout<<levels*(levels + 1)/2<<"\n";
		}
	}
}