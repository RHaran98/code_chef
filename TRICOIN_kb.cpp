#include <iostream>
#include <cmath>
int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		long int n;
		std::cin>>n;
		int root = floor(-0.5 + sqrt(0.5 * 0.5 - 4 * 0.5 * (-n)));
		std::cout<<root<<"\n";
	}
}