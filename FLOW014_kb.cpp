#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		double hardness, carb_content, tensile_str;
		std::cin>>hardness>>carb_content>>tensile_str;
		int grade = 5;
		if(hardness > 50 && carb_content < 0.7 && tensile_str > 5600)
		{
			grade = 10;
		}
		else if(hardness > 50 && carb_content < 0.7)
		{
			grade = 9;
		}
		else if(carb_content < 0.7 && tensile_str > 5600)
		{
			grade = 8;
		}
		else if(hardness > 50 && tensile_str > 5600)
		{
			grade = 7;
		}
		else if(hardness > 50 || carb_content < 0.7 || tensile_str > 5600)
		{
			grade = 6;
		}

		std::cout<<grade<<"\n";
	}
}