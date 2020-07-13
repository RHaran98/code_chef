#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	whlie(tc--)
	{
		int a,b;
		std::cin>>a>>b;
		if(a > b)
		{
			std::cout<<a;
		}
		else
		{
			std::cout<<b;
		}

		std::cout<<" "<<a+b<<"\n";
	}
}