#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class complex
{
	int real;
	int imag;
	public:
	void getdata();
	void display();
	void sum(complex c,complex d);
};
void complex::getdata()
{
	cout<<"Enter real part: ";
	cin>>real;
	cout<<"Enter imag part: ";
	cin>>imag;
}
void complex::display()
{
	cout<<real<<"+"<<imag<<"i"<<endl;
}
void complex::sum(complex c,complex d)
{
      real=c.real+d.real;
      imag=c.imag+d.imag;
}
int main()
{
	complex c1,c2,c3;
	clrscr();
	c1.getdata();
	c2.getdata();
	c3.sum(c1,c2);
	c3.display();
	getch();
	return 0;
}
