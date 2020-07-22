#include <iostream>

int gcdOfList(int arr[], int size)
{
	int n1 = arr[0];
	int n2 = arr[1];

	int gcd;
	int c = (arr[0] < arr[1] ? arr[0] : arr[1]);

	while(c)
	{
		if(n1 % c == 0 && n2 % c == 0)
		{
			gcd = c;
			bool dividesall = true;
			for(int i = 0; i < size; i++)
			{
				if(arr[i] % gcd != 0)
				{
					dividesall = false;
					break;
				}
			}

			if(!dividesall) 
			{
				c--;
				continue;
			}
			else
			{
				break;
			}
		}
		c--;
	}

	return gcd;
}

int main()
{
	int tc;
	std::cin>>tc;
	int arr[50];
	while(tc--)
	{
		int n;
		std::cin>>n;
		for(int i = 0; i < n; i++)
		{
			std::cin>>arr[i];
		}
		int gcd = gcdOfList(arr,n);
		for(int i = 0; i < n; i++)
		{
			std::cout<<arr[i]/gcd<<" ";
		}
		std::cout<<"\n";
	}
}