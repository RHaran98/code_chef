#include <iostream>

int LargestSum(int** a, int i, int j, int rows)
{
	if(i+1 > rows || j + 1 > rows)
	{
		return 0;
	}
	return a[i][j] + std::max(LargestSum(a, i+1, j, rows), LargestSum(a, i+1, j+1, rows));
}

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int rows;
		std::cin>>rows;

		int **arr = new int* [rows];
		for(int i = 0; i < rows; i++)
		{
			arr[i] = new int [rows];
		}

		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j <= i; j++)
			{
				std::cin>>arr[i][j];
			}
		}

		int sum = LargestSum(arr, 0, 0, rows);
		std::cout<<sum<<"\n";

		for(int i = 0; i < rows; i++)
		{
			delete [] arr[i];
		}
		delete [] arr;
	}
}