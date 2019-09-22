#include<stdio.h>
#include<stdlib.h>
#include<string.h>        //program to combine two link list in such a way that output is displayed without creating a new node
struct node                 // eg.list A=  1 , 2 , 3
{                           //   List B=  4 , 5 , 6
  int data;                 //Output: 1 , 4 , 2 , 5 , 3 , 6
  struct node *next;
};
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
struct node *add(struct node *p,struct node *q)
{
  struct node *temp=p,*r,*s;
  r=p->next;
  s=q->next;
  while(q!=NULL)
  {
  p->next=q;
  if(q->next==NULL)
  break;
  q->next=r;
  p=r;
  q=s;
  r=r->next;
  s=s->next;
  }
  return temp;
}
void display(struct node * p)
{
  printf("\nList is \n");
  while(p!=NULL)
  {
    printf("%d ",p->data);
  p=p->next;
  }
}
int main()
{
struct node *p,*q,*z;
p=create();
q=create();
z=add(p,q);
display(z);
}
