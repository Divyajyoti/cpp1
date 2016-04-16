#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
struct list
{
int i,j,val;
struct list *next;
};

typedef struct list node;
node *create()
{
 node *root,*prev,*newnode;
 int n,m,i,j;
 printf("Enter size of matrix: ");
 scanf("%d%d",&n,&m);
 root=prev=NULL;
 for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
   {
	newnode=(node*)malloc(sizeof(node));
	newnode->i=i;
	newnode->j=j;
	printf("Enter value of %d row %d column: ",i+1,j+1);
	scanf("%d",&newnode->val);
	newnode->next=NULL;
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		prev->next=newnode;
	}
	prev=newnode;
   }
 }
 return root;
}

void display(node *root)
{
 node *start;
 start=root;
 while(start!=NULL)
 {
  printf("%d\n",start->val);
  start=start->next;
 }
}
void main()
{
 node *root=NULL;
 root=create();
 display(root);
 getch();
}