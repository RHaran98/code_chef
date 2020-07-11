#include <iostream>

int number_list[1000000];

void mergesort(int start_ind, int end_ind)
{
	int mid = (start_ind + end_ind) / 2;
	if(start_ind != end_ind)
	{
		mergesort(start_ind, mid);
		mergesort(mid + 1, end_ind);
		
		constexpr int s1 = mid - start_ind + 1;
		constexpr int s2 = end_ind - mid;

		int arr1[s1], arr2[s2];

		for(int i = 0; i < s1; i++)
		{
			arr1[i] = number_list[start_ind + i];
		}

		for(int i = 0; i < s2; i++)
		{
			arr2[i] = number_list[mid + 1 + i];
		}

		int index = start_ind;
		for(int i = 0, j = 0; i <= s1 || j <= s2;)
		{
			if(j == s2 + 1 || arr1[i] <= arr2[j])
			{
				number_list[index] = number_list[i];
				i++; index++;
			}
			else if(i == s1 + 1 || arr2[j] < arr1[i])
			{
				number_list[index] = number_list[j];
				j++; index++;
			}
		}
	}
}

int main() 
{
	int tc;

	std::cin>>tc;

	for(int i = 0; i < tc; i++)
	{
		std::cin>>number_list[i];
	}

	mergesort(0,tc-1);	

	for(int i = 0; i < tc; i++)
	{
		std::cout<<number_list[i]<<"\n";
	}
}