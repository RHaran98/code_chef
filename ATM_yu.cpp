#include<iostream.h>
#include<conio.h>

void main()
{       clrscr();

	int x;
	float y;

	cin>>x;
	cin>>y;

	if( x%5==0 && (y>x+0.5))
		cout<<y-(float)x-0.5;
  else
		cout<<y;

	getch();
}
