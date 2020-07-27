#include <iostream>
#include <cctype>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		std::string s1, s2;
		std::cin>>s1>>s2;

		bool matchable = true;
		for(int i = 0; i < s1.length(); i++)
		{
			if(isalpha(s1[i]) && isalpha(s2[i]) && s1[i] != s2[i])
			{
				matchable = false;
				break;
			}
		}

		if(matchable)
		{
			std::cout<<"Yes\n";
		}
		else
		{
			std::cout<<"No\n";
		}
	}
}