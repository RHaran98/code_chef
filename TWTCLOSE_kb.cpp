#include <iostream>

int main()
{
	int list_of_tweets[1001] = {0};
	int open_tweets = 0;
	int tweets, clicks;
	std::cin>>tweets>>clicks;;
	while(clicks--)
	{
		int ind;
		std::string s;
		std::cin>>s;

		if(s == "CLICK")
		{
			std::cin>>ind;
			std::cout<<ind<<"\n";
			if(list_of_tweets[ind])
			{
				list_of_tweets[ind]--;
				open_tweets--;
			}
			else
			{
				list_of_tweets[ind]++;
				open_tweets++;
			}
		}
		else
		{
			open_tweets = 0;
			for(int n : list_of_tweets)
			{
				n = 0;
			}
		}

		std::cout<<open_tweets<<"\n";
	}
}