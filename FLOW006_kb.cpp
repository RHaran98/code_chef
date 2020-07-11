#include <iostream>

int main()
{
	int tc;
	int n;

	std::cin>> tc;

	while(tc--)
	{
		int sum = 0;
		std::cin>>n;
		while(n)
		{
			sum += n % 10;
			n /= 10;
		}

		std::cout<<sum<<"\n";
	}

}