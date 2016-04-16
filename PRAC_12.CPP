#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	int r;
	char name[15];
	float m[3];
	float avg;
	public:
	void getdata();
	void showdata();
	void average();
	friend void sort(student s[]);
};

void sort(student s[3])
{
	int i,j,k,temp;
	float avg1;
	char name1[15];
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(s[i].avg<s[j].avg)
			{
				avg1=s[i].avg;
				s[i].avg=s[j].avg;
				s[j].avg=avg1;

				temp=s[i].r;
				s[i].r=s[j].r;
				s[j].r=temp;


				for(k=0;k<2;k++)
				{
				temp=s[i].m[k];
				s[i].m[k]=s[j].m[k];
				s[j].m[k]=temp;
				 }

				strcpy(name1,s[i].name);
				strcpy(s[i].name,s[j].name);
				strcpy(s[j].name,name1);
			}
	}
}
}

void student::getdata()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter roll no: ";
	cin>>r;
	cout<<"Enter marks of three sub: ";
	for(int i=0;i<3;i++)
	{
	   cin>>m[i];
	}
}
void student::showdata()
{
	cout<<name<<endl<<r<<endl;
	for(int i=0;i<3;i++)
	{
	   cout<<"marks"<<i<<": "<<m[i];
	}
	cout<<"avg: "<<avg;
}

void student::average()
{
    avg=(m[1]+m[2]+m[3])/3;
}

int main()
{
	student s[3];
	int i;
	for(i=0;i<3;i++)
	{
	   s[i].getdata();
	}
	for(i=0;i<3;i++)
	{
	   s[i].average();
	}
	sort(s);
	for(i=0;i<3;i++)
	{
	   s[i].showdata();
	}
	getch();
	return 0;
}


