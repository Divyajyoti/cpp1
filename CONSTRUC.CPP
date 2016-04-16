#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class integer
{
   int m,n;
   public:
   integer();
   integer(int,int);
   void show();
};
/*integer::integer()
{
   m=5;
   n=9;
}*/

integer::integer(int a,int b)
{
   m=a;
   n=b;
}

void integer::show()
{
   cout<<m<<endl<<n<<endl;
}

void main()
{
   integer int1,int2(2,3);

   clrscr();
   int1.show();
   int2.show();
   getch();
}