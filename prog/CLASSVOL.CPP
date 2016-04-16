#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>

class volume
{
	int d1,d2,d3;
	public:
	int vol(int s);
	int vol(int l,int b,int h);
	int vol(int r,int h);
	void getdata();
	void putdata();
};
void volume::putdata(int v)
{
   cout<<"volume is"<<v;
}
void volume::getdata()
{
   int ch;
   cout<<Enter your choice:<<endl<<1-cube<<endl<<2-cuboid<<endl<<3-cylinder<<endl;
   cin>>ch;
   switch(ch)
   {
       case 1:cout<<"Enter side of cube: ";
	cin>>d1;
       case 2:cout<<"Enter l,b,h of cuboid: ";
	cin>>d1>>d2>>d3;
       case 3:cout<<"Enter radius and height of cylinder: ";
	cin>>d1>>d2;
   }
}
int volume::vol(int s)
{
  int v;
  v=s*s*s;
  return v;
}

int volume::vol(int l,int b,int h)
{
  int v;
  v=l*b*h;
  return v;
}
int volume::vol(int r,int h)
{
   int v;
   v=M_PI*r*r*h;
   return v;
}

int main()
{
	volume v1;
	int v;
	clrscr();
	v1.getdata();
	v=v1.vol();
	vi.putdata(v);
	getch();
	return 0;
}

