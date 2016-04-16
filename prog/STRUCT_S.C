//write a program to demonstrate structure, array of structure and array within structure
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
 int r;
 char name[20];
 int marks[3];
 float avg;
 int sum;
}s[5];

void main()
{
 int i,j,r1,sum1,temp,k;
 float avg1;
 char name1[15];
 clrscr();
 for(i=0;i<3;i++)
 {
  s[i].sum=0;
  printf("Enter name: ");
  scanf("%s",s[i].name);
  printf("Enter roll no: ");
  scanf("%d",&s[i].r);
  for(j=0;j<2;j++)
  {
   printf("Enter marks %d: ",j+1);
   scanf("%d",&s[i].marks[j]);
   s[i].sum=s[i].sum+s[i].marks[j];
  }
  s[i].avg=s[i].sum/2.0;
 }
 for(i=0;i<5;i++)
 {
  printf("\nName and roll no:  %s and %d ",s[i].name,s[i].r);
  printf("\nSum: %d",s[i].sum);
  printf("\nAvg: %f",s[i].avg);
 }

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

       temp=s[i].sum;
       s[i].sum=s[j].sum;
       s[j].sum=temp;

       for(k=0;k<2;k++)
       {
	   temp=s[i].marks[k];
	   s[i].marks[k]=s[j].marks[k];
	   s[j].marks[k]=temp;
       }

       strcpy(name1,s[i].name);
       strcpy(s[i].name,s[j].name);
       strcpy(s[j].name,name1);
    }
  }
 }
 for(i=0;i<3;i++)
 {
  printf("\nName and roll no:  %s and %d \n",s[i].name,s[i].r);
  for(j=0;j<2;j++)
  {
   printf("marks %d: %d  ",j+1,s[i].marks[j]);
  }
  //printf("\nSum: %d",s[i].sum);
  printf("\nAvg: %f",s[i].avg);
 }
getch();
}

