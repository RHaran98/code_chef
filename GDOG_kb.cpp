#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n,k;
		std::cin>>n>>k;
		if(n == k && n < 3)
		{
			std::cout<<0;
		}
		else if(k > n)
		{
			std::cout<<n;
		}
		else
		{
		    int max = 0;
			for(int i = k; i > 0; i--)
			{
				if(n % i > max)
				{
					max = n % i;
				}
			}
			std::cout<<max;
		}
		std::cout<<"\n";
	}
}