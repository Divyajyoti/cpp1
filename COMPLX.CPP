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
	complex sum(complex c,complex d);
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
complex complex::sum(complex c,complex d)
{
      complex e;
      e.real=real+c.real+d.real;
      e.imag=imag+c.imag+d.imag;
      return e;
}
int main()
{
	complex c1,c2,c3,c4;
	clrscr();
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4=c3.sum(c1,c2);
	c4.display();
	getch();
	return 0;
}