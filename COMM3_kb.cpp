#include <iostream>
#include <cmath>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int range;
		std::cin>>range;
		int x1, x2, x3, y1, y2, y3;
		std::cin>>x1>>y1>>x2>>y2>>x3>>y3;

		double dist12 = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		double dist13 = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
		double dist23 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));

		if(dist12 < range && dist13 < range)
		{
			std::cout<<"yes\n";
		}
		else if(dist12 < range && dist23 < range)
		{
			std::cout<<"yes\n";
		}
		else if(dist23 < range && dist13 < range)
		{
			std::cout<<"yes\n";
		}
		else
		{
			std::cout<<"no\n";
		}
	}
}