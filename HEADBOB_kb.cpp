#include <iostream>
#include <cstdio>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int n;
		std::string s;
		std::cin>>n;
		bool determined = false;
		while(n--)
		{
			char c = getchar();
			if(c == 'I')
			{
				std::cout<<"INDIAN\n";
				determined = true;
				break;
			}
			else if(c == 'Y')
			{
				std::cout<<"NOT INDIAN\n";
				determined = true;
				break;
			}
		}
		if(!determined)
		{
			std::cout<<"NOT SURE\n";
		}
	}
}