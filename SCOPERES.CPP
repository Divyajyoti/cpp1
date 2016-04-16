#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int m=10;

void main()
{
	 clrscr();
	 int m=20;
	 {
		int k=m;
		int m=30;
		cout<<"Inner block"<<endl;
		cout<<"m="<<m<<endl;
		cout<<"k="<<k<<endl;
		cout<<"m="<<::m<<endl;
	 }
	 cout<<"Outer block"<<endl;
	 cout<<"m="<<m<<endl;
	 cout<<"m="<<::m<<endl;
	 getch();
}
