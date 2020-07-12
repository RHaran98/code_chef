#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n;
		std::cin>>n;
		int count = 0;
		int divisor = 2048;
		while(divisor != 0)
		{
			if(n > 2048)
			{
				n -= 2048;
				count++;
				continue;
			}

			if(n > divisor)
			{
				n -= divisor;
				count++;
			}
			divisor /= 2;
		}
		std::cout<<count<<"\n";
	}
}