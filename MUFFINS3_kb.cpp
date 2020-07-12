#include <iostream>

int main() 
{
	int tc;
	std::cin>>tc;

	while(tc--)
	{
		int n;
		std::cin>>n;
		std::cout>>(n/2 + 1)<<"\n";
	}
}