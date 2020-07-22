#include <iostream>

int main()
{
	int n1,n2;
	std::cin>>n1>>n2;
	if(n1 > n2)
	{
		std::cout<<n1-n2;
	}
	else
	{
		std::cout<<n1+n2;
	}
}