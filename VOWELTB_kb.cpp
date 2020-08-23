#include <iostream>

int main()
{
	char c;
	std::string vowels = "AEIOU";
	std::cin>>c;
	bool isVowel = false;
	for(char vowel : vowels)
	{
		if(c == vowel) isVowel = true;
	}
	if(isVowel)
	{
		std::cout<<"Vowel\n";
	}
	else
	{
		std::cout<<"Consonant\n";
	}
}
