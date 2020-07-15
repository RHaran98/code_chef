#include <iostream>

int main()
{
	int n;
	int arr1[100000];
	int arr2[100000];

	while(std::cin>>n)
	{
		if(n == 0) break;

		for(int i = 0; i < n; i++)
		{
			std::cin>>arr1[i];
		}

		for(int i = 0; i < n; i++)
		{
			arr2[arr1[i]-1] = i+1;
		}

		bool ambiguous = true;
		for(int i = 0; i < n; i++)
		{
			if(arr1[i] != arr2[i])
			{
				ambiguous = false;
				break;
			}
		}

		if(ambiguous)
		{
			std::cout<<"ambiguous\n";
		}
		else
		{
			std::cout<<"not ambiguous\n";
		}
	}
}