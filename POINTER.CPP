#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class M
{
   int x;
   int y;
   public:
   void setdata(int a,int b)
   {
      x=a;
      y=b;
   }
   friend int sum(M m);
};

int sum(M m)
{
   int M::*px=&M::x;
   int M::*py=&M::y;
   M*pm=&m;
   //int s=m.*px+m.*py;
   int s=pm->*px+pm->*py;
   //int s=m.*px+pm->*py;
   return s;
}

int main()
{
   M m;
   clrscr();
   void (M::*pf)(int,int)=&M::setdata;
   (m.*pf)(10,20);
   cout<<"Sum="<<sum(m)<<endl;

   M*op=&m;
   (op->*pf)(30,40);
   cout<<"Sum="<<sum(m)<<endl;
   getch();
   return 0;
}
