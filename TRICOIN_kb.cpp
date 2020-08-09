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
		height = 1;
		while(n - height * (height + 1) / 2 >= height + 1) height++;
		std::cout<<height<<"\n";
	}
}