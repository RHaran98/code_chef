#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int a,b,c;
		std::cin>>a>>b>>c;
		if(a+b+c == 180)
		{
			std::cout<<"YES\n";
		}
		else
		{
			std::cout<<"NO\n";
		}
	}
}