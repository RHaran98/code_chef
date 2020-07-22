#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		long n1,n2;
		std::cin>>n1>>n2;
		int larger = n1, smaller = n2;
		if(n2 > n1) 
		{
			larger = n2;
			smaller = n1; 
		}

		int gcd;
		while(1)
		{
			if(larger % smaller == 0)
			{
				gcd = smaller;
				break;
			}
			else
			{
				int temp = smaller;
				smaller = larger % smaller;
				larger = temp;
			}
		}

		long lcm = n1 * n2 / gcd;
		std::cout<<gcd<<" "<<lcm<<"\n";
	}
}