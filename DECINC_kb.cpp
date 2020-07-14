#include <iostream>

int main()
{

	int n;
	std::cin>>n;
	if(n % 4 == 0)
	{
		std::cout<<++n;
	}
	else
	{
		std::cout<<--n;
	}

}