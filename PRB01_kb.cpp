#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n;
		std::cin>>n;
		bool isprime = true;
		for(int i = 2; i * i <= n; i++)
		{
			if(n % i == 0)
			{
				isprime = false;
				break;
			}
		}

		if(n == 1) isprime = false;

		if(isprime)
		{
			std::cout<<"yes\n";
		}
		else
		{
			std::cout<<"no\n";
		}
	}
}