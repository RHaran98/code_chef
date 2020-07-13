#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		std::string s;
		std::cin>>s;
		bool lost = false;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] != s[s.length() - i - 1])
			{
				std::cout<<"loses\n";
				lost = true;
				break;
			}
		}
		if(!lost)
		{
			std::cout<<"wins\n";
		}
	}
}