#include <iostream>
#include <cctype>

int main()
{
	int tc;
	std::cin>>tc;
	char operator_stack[400];
	int stack size = 0;

	while(tc--)
	{
		std::string s;
		std::cin>>s;
		std::string ans = "";
		for(char c : s)
		{
			if(c == '(') continue;
			else if(c == ')') 
			{
				ans += operator_stack[size--];
			}
			else if(isalpha(c))
			{
				ans += c;
			}
			else
			{
				operator_stack[size++] = c;
			}
		}
		std::cout<<s<<"\n";
		size = 0;
	}
}
