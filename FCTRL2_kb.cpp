#include <iostream>

int main() 
{
	constexpr int size = 170;
	int tc;
	int n;
	std::cin>>tc;

	while(tc--)
	{
		int nfac[size] = {0};
		nfac[size - 1] = 1;
		std::cin>>n;
		for(int i = 1; i <= n; i++)
		{
			int carry = 0;
			for(int j = size-1; j >= 0; j--)
			{
				nfac[j] = nfac[j] * i + carry;
				if(nfac[j] >= 10) 
				{
			        carry = nfac[j] / 10;
				}
				else {
				    carry = 0;
				}
				nfac[j] = nfac[j] % 10;
			}
		}

		bool numberstarted = false;

		for(int i = 0; i < size; i++)
		{			
			if(nfac[i] != 0)
			{
				numberstarted = true;
			}
			if(numberstarted)
			{
				std::cout<<nfac[i];
			}
		}

		std::cout<<"\n";
	}
}