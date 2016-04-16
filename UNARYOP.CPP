#include<iostream.h>
#include<conio.h>

class sample
{
	int x,y,z;
	public:
	sample(int a,int b,int c)
	{
	   x=a;
	   y=b;
	   z=c;
	}
	sample()
	{
	}
	void operator -()
	{
	   x=-x;
	   y=-y;
	   z=-z;
	}
	void operator --()
	{
	   x--;
	   y--;
	   z--;
	}
	void display()
	{
	   cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z;
	}
};

void main()
{
	sample s1(10,-20,30);
	clrscr();
	-s1;
	s1.display();
	s1--;
	s1.display();
	getch();
}