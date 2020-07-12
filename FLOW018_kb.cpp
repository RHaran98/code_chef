#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		long n, prod = 1;
		std::cin>>n;
		while(n){
			prod *= n;
			n--;
		}
		std::cout<<prod<<"\n";
	}
}