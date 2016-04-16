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
	complex operator +(complex d);
	complex operator +(int d);
	friend complex operator +(int d,complex e);
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
complex complex::operator +(complex d)
{
      complex c;
      c.real=real+d.real;
      c.imag=imag+d.imag;
      return c;
}

complex complex::operator +(int d)
{
      complex c;
      c.real=real+d;
      c.imag=imag+d;
      return c;
}
complex operator +(int d,complex e)
{
      complex c;
      c.real=d+e.real;
      c.imag=d+e.imag;
      return c;
}

int main()
{
	complex c1,c2,c3;
	clrscr();
	c1.getdata();
	c2.getdata();
	c3=c1+c2;
	c3.display();
	c3=c1+5;
	c3.display();
	c3=5+c1;
	c3.display();
	getch();
	return 0;
}
