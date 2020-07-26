#include <iostream>
#include <cmath>

constexpr int MAX = 2100;
int prime_list[MAX];
void Sieve()
{
	for(int i = 0; i < MAX; i++)
	{
		prime_list[i] = 1;
	}
	prime_list[0] = 0;
	prime_list[1] = 0;

	int lim = sqrt(MAX) + 1;
	for(int i = 2; i < lim; i++)
	{
	    if(prime_list[i] != 1) continue;
		int multiplier = 2;
		while(i * multiplier <= MAX)
		{
			prime_list[i*multiplier] = 0;
			multiplier++;
		}
	}
}

int main()
{
    Sieve();
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int x,y;
		std::cin>>x>>y;
		int sum = x + y + 1;
		int extra = 1;
		while(prime_list[sum] != 1)
		{
		    sum++;
			extra++;
		}

		std::cout<<extra<<"\n";
	}
}