#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n;
		std::cin>>n;
		if(n < 10)
		{
			std::cout<<"Thanks for helping Chef!";
		}
		else
		{
			std::cout<<-1;
		}
		std::cout<<"\n";
	}
}