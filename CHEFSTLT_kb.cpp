#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		std::string s1, s2;
		std::cin>>s1>>s2;

		int qcount = 0;
		int diff = 0;

		for(int i = 0; i < s1.length(); i++)
		{
			if (s1[i] == '?'|| s2[i] == '?') qcount++;
			else
			{
				if(s1[i] != s2[i]) diff++;
			}
		}

		int min = diff;
		int max = diff + qcount;
		std::cout<<min<<" "<<max<<"\n";
	}
}