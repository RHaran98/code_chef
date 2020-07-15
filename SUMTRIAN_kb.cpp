#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int rows;
		std::cin>>rows;

		int arr[100][100];

		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j <= i; j++)
			{
				std::cin>>arr[i][j];
			}
		}

		for(int i = rows-2; i >= 0; i--)
		{
			for(int j = 0; j <= i; j++)
			{
				arr[i][j] += std::max(arr[i+1][j], arr[i+1][j+1]);
			}
		}
		std::cout<<arr[0][0]<<"\n";
	}
}