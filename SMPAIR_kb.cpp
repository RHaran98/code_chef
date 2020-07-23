#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n;
		std::cin>>n;
		int a, min1 = 1000000, min2 = 1000000;
		for(int i = 0; i < n; i++)
		{
			std::cin>>a;
			if(a < min1)
			{
				min2 = min1;
				min1 = a;
			}
			else if(a < min2)
			{
				min2 = a;
			}
		}

		std::cout<<min1 + min2<<"\n";
	}
}