#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int i,n;
		std::cin>>i>>n;
		while(i--)
		{
			n = n*(n+1)/2;
		}
		std::cout<<n<<"\n";
	}
}