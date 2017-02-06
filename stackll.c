#include <stdio.h>
#include<stdlib.h>

typedef struct link
{
 int info;
 struct link *next;
 }node;

node *top=NULL,*p,*n;
void push()
{
  int x;
  p=(node*)malloc(sizeof(node));
  printf("enter info");
  scanf("%d",&x);
  p->info=x;
  if(top=NULL)
  { p->next=NULL;
    top=p;
  }
  else
   {p->next=top;
    top=p;}
}

void pop()
{
  if(top==NULL)
  printf("empty");
  else
  {  
     n=top;
     top=top->next;
     n->next=NULL;
     free(n);
   }
}

     
  
  
