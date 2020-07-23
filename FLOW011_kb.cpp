#include <iostream>
#include <iomanip>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int basic;
		std::cin>>basic;
		double hra, da;
		if(basic<1500)
		{
			hra = 0.1 * basic; 
			da = 0.9 * basic;
		}
		else
		{
			hra = 500;
			da = 0.98 * basic;
		}
		double total = basic + hra + da;
		std::cout<<std::fixed<<std::setprecision(2)<<total<<"\n";
	}
}