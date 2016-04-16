#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
   char *name;
   int length;
   public:
   string()
   {
      length=0;
      name=new char[length+1];
   }
   string(char *s)
   {
      length=strlen(s);
      name=new char[length+1];
      strcpy(name,s);
   }
   ~string()
   {
      cout<<"destructor is called";
   }
   void display()
   {
      cout<<"name="<<name<<endl;
   }
   void join(string &a,string &b)
   {
     length=a.length+b.length;
     name=new char[length+2];
     strcpy(name,a.name);
     strcat(name," ");
     strcat(name,b.name);
   }
};

int main()
{
   {
   char *first="Hello";
   string s1,s2;
   string s3(first);
   string s4("scet");
   string s5("surat");
   clrscr();
   s3.display();
   s4.display();
   s5.display();
   s1.join(s3,s4);
   s2.join(s3,s5);
   s1.display();
   s2.display();
   getch();
   }
   return 0;

}