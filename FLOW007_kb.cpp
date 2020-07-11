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
		bool isstarted = false;
		for(int i = s.length() - 1; i >= 0; i--)
		{
			if(s[i] != '0' || isstarted) {
				std::cout<<s[i];
				isstarted = true;
			}
		}
		std::cout<<"\n";
	}
}