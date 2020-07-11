#include <iostream>

int main() 
{
	int tc;
	int a,b;

	std::cin>>tc;

	while(tc--)
	{
		std::cin>>a>>b;
		std::cout<<(a%b)<<"\n";
	}
}