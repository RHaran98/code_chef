#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		std::string balloons;
		std::cin>>balloons;
		int amber = 0, brass = 0;
		for(char c : balloons)
		{
			if (c == 'a') amber++;
			else if (c == 'b') brass++;
		}
		std::cout<<std::min(amber, brass)<<"\n";
	} 
}