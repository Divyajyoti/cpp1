#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>

int vol(int s);
int vol(int l,int b,int h);
int vol(int r,int h);

int main()
{
	int d1,d2,d3,v;
	clrscr();
	cout<<"Enter side of cube: ";
	cin>>d1;
	v=vol(d1);
	cout<<"Volume is "<<v<<endl;
	cout<<"Enter l,b,h of cuboid: ";
	cin>>d1>>d2>>d3;
	v=vol(d1,d2,d3);
	cout<<"Volume is "<<v<<endl;
	cout<<"Enter radius and height of cylinder: ";
	cin>>d1>>d2;
	v=vol(d1,d2);
	cout<<"Volume is "<<v<<endl;
	getch();
	return 0;
}

int vol(int s)
{
  int v;
  v=s*s*s;
  return v;
}

int vol(int l,int b,int h)
{
  int v;
  v=l*b*h;
  return v;
}
int vol(int r,int h)
{
   int v;
   v=M_PI*r*r*h;
   return v;
}
