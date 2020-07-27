#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int houses[101] = {0};
		int m,x,y;
		std::cin>>m>>x>>y;
		int houses_covered = x*y;

		for(int i = 0; i < m; i++)
		{
			int cop_house;
			std::cin>>cop_house;
			int init_value = (cop_house - houses_covered >= 1 ? cop_house - houses_covered : 1);
			for(int j = init_value; j < 101 && j <= cop_house + houses_covered; j++)
			{
				houses[j] = 1;
			}
		}

		int safe_count = 0;
		for(int i = 1; i < 101; i++)
		{
			if(houses[i] == 0) safe_count++;
		}

		std::cout<<safe_count<<"\n";
	}
}