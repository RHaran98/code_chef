#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	int oddcount = 0, evencount = 0;
	while(tc--)
	{
		int n;
		std::cin>>n;
		if(n % 2 == 0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	}
	if(evencount>oddcount)
	{
		std::cout<<"READY FOR BATTLE";
	}
	else
	{
		std::cout<<"NOT READY";
	}
}