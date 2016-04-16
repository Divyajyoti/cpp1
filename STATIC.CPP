#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class item
{
	static int count;
	int n;
	public:
	void getdata();
	void display();
};
int item::count;
void item::getdata()
{
	cout<<"Enter data:";
	cin>>n;
	count++;
}
void item::display()
{
	cout<<n<<endl<<"count="<<count<<endl;
}

int main()
{
	item a,b,c;
	clrscr();
	a.display();
	b.display();
	c.display();
	a.getdata();
	a.display();
	b.getdata();
	a.display();
	c.getdata();
	cout<<"After assigning values"<<endl;
	a.display();
	b.display();
	c.display();
	getch();
	return 0;
}