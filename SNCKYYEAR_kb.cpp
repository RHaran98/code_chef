#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n;
		std::cin>>n;
		switch(n)
		{
			case 2010:
			case 2015:
			case 2016:
			case 2017:
			case 2019:
			std::cout<<"HOSTED\n";
			break;
			default:
			std::cout<<"NOT HOSTED\n";
			break;
		}
	}
}