#include <iostream>

int main()
{
	int tc;

	std::cin>>tc;
	std::cin.ignore(1,'\n');

	while(tc--)
	{
		std::string s;
		getline(std::cin, s);
		for(int i = s.length() - 1; i >= 0; i--)
		{
			std::cout<<s[i];
		}
		std::cout<<"\n";
	}
}