#include <iostream>

int main()
{
	int tc;

	std::cin>>tc;
	std::cin.ignore(1, '\n');


	while(tc--)
	{
		int sum = 0;
		std::string s;
		getline(std::cin, s);
		sum = (s[0] - '0') + (s[s.length() - 1] - '0');
		std::cout<<sum<<"\n";
	}
}