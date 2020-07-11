#include <iostream>
#include <cstdlib>

int main()
{
	int rounds;
	int p1score, p2score;
	int cumulativep1score = 0, cumulativep2score = 0;

	std::cin>>rounds;
	int *lead = new int[rounds];

	for(int i = 0; i < rounds; i++)
	{
		std::cin>>p1score>>p2score;
		cumulativep1score += p1score;
		cumulativep2score += p2score;

		lead[i] = cumulativep1score - cumulativep2score;
	}

	int max_index = 0;

	for(int i = 1; i < rounds; i++)
	{
		if(abs(lead[max_index]) < abs(lead[i]))
		{
			max_index = i;
		}
	}

	if(lead[max_index] > 0) {
		std::cout<<1;
	}
	else {
		std::cout<<2;
	}

	std::cout<<" "<<abs(lead[max_index]);

	delete [] lead;
}