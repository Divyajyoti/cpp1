#include<iostream.h>
#include<conio.h>


class person
{
	int age;
	char name[15];
	public:

	void data();
	void display()
	{
	   cout<<"Name="<<name<<endl<<"Age= "<<age;
	}
};
void person::data()
	{
	   cout<<"Enter name and age: ";
	   cin>>name>>age;
	}

void main()
{
	person p;
	clrscr();
	p.data();
	p.display();
	getch();
}