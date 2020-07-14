#include <iostream>
#include <cctype>
int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		char c;
		std::cin>>c;
		switch(tolower(c))
		{
			case 'b':
			std::cout<<"BattleShip\n";
			break;
			case 'c':
			std::cout<<"Cruiser\n";
			break;
			case 'd':
			std::cout<<"Destroyer\n";
			break;
			case 'f':
			std::cout<<"Friagte\n";
			break;
		}
	}
}