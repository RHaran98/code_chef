#include <iostream>

int main()
{
	int tc;
	std::cin>>tc;
	while(tc--)
	{
		int a,b,c,d;
		std::cin>>a>>b>>c>>d;
		
		bool isRectangle = false;
		if(a == b && c == d) isRectangle = true;
		else if(a == c && b == d) isRectangle = true;
		else  if(a == d && b == c) isRectangle = true;

		if(isRectangle) std::cout<<"YES\n";
		else std::cout<<"NO\n";
	}
}