#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	long int arr[50000];
	while(tc--)
	{
		int n;
		std::cin>>n;
		int min_index = 0;
		for(int i = 0; i < n; i++)
		{
			std::cin>>arr[i];
			if(arr[i] < arr[min_index]) 
			{
				min_index = i;
			}
		}
		std::cout<<arr[min_index] * (n-1)<<"\n";
	}
}