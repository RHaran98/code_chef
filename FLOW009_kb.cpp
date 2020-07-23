#include <iostream>
#include <iomanip>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		long a,b;
		std::cin>>a>>b;
		double total;
		if(a > 1000) total = a*b*0.9;
		else total = a*b;
		std::cout<<std::fixed<<total<<"\n";
	}
}