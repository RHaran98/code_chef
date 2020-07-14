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
		int denom = 100;
		whlie(n)
		{
			if(n >= denom)
			{
				count += n/denom;
				n %= denom;
			}
			if(denom == 50)
			{
				denom /= 5;
			}
			else
			{
				denom /= 2;
			}
		}
		std::cout<<count<<"\n";
	}
}