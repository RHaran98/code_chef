#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int freq_arr1[26] = {0};
		int freq_arr2[26] = {0};
		std::string s;
		std::cin>>s;

		for(int i = 0; i < s.length()/2; i++)
		{
			freq_arr1[s[i] - 'a']++;
		}
		
		int offset = 0;
		if(s.length() % 2 != 0)
		{
		    offset = 1;
		}
		
		for(int i = s.length()/2 + offset; i < s.length(); i++)
		{
		    freq_arr2[s[i] - 'a']++;
		}

		bool islapindrome = true;
		for(int i = 0; i < 26; i++)
		{
			if(freq_arr1[i] != freq_arr2[i])
			{
				islapindrome = false;
				break;
			}
		}

		if(islapindrome)
		{
			std::cout<<"YES\n";
		}
		else
		{
			std::cout<<"NO\n";
		}
	}
}