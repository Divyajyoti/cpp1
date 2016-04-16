#include<iostream.h>
#include<conio.h>
#include<string.h>

class invent2;

class invent1
{
	int code;
	int item;
	float price;
	public:
	invent1(int a,int b,float c)
	{
	   code=a;
	   item=b;
	   price=c;
	}
	void display()
	{
	   cout<<"code="<<code<<endl<<"item="<<item<<"price="<<price<<endl;
	}
	int getcode()
	{
	   return code;
	}
	int getitem()
	{
	   return item;
	}
	float getprice()
	{
	   return price;
	}
	operator float()
	{
	   return (item*price);
	}

};

class invent2
{
	int code;
	float value;
	public:
	invent2(int a,float c)
	{
	   code=a;
	   value=c;
	}
	invent2()
	{
	   code=0;
	   value=0;
	}
	void display()
	{
	   cout<<"code="<<code<<endl<<"value="<<value<<endl;
	}

	invent2(invent1 p)
	{
	   code=p.getcode();
	   value=p.getitem()*p.getprice();
	}

};

int main()
{
	invent1 s1(100,5,190.0);
	invent2 d1;
	float totalval;
	clrscr();
	totalval=s1;       //class to basic
	d1=s1;             //class1 to class2
	s1.display();
	d1.display();
	cout<<totalval;
	getch();
	return 0;
}