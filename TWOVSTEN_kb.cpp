#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		long n;
		std::cin>>n;
		if(n % 5 == 0)
		{
			if(n % 2 == 0)
			{
				std::cout<<0<<"\n";
				continue;
			}
			std::cout<<1<<"\n";
		}
		else
		{
			std::cout<<-1<<"\n";
		}
	}
}