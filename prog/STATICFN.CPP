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
	static void showcount()
	{
	   cout<<"count="<<count<<endl;
	}
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
	cout<<n<<endl;
}

int main()
{
	item a,b,c;
	clrscr();
	a.getdata();
	b.getdata();
	item::showcount();
	c.getdata();
	cout<<"After assigning values"<<endl;
	a.display();
	b.display();
	c.display();
	item::showcount();
	getch();
	return 0;
}