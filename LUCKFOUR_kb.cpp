#include <iostream>

int main() 
{
	int tc;

	std::cin>>tc;

	while(tc--)
	{
		char c;
		int fourcount = 0;
		getchar();
		do
		{
			c = getchar();
			if(c == '4') fourcount++;
		}while(c != '\n');

		std::cout<<fourcount<<"\n";
	}
}