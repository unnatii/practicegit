#include<stdio.h>

typedef struct lnode 
{
 int info;
 struct lnode *next;
}node;

void create(int m)
{
  int n,i;
  node *st,*p,*l;
  st=NULL;
  for(i=1;i<=m;i++)
{
  p=(node*)malloc(sizeof(node*));
  printf("enter data");
  scanf("%d",&n);
  p->info=n;
}
  if(st==NULL)
  st=p;
  else
  l->next=p;
  l=p;
  p->next=st;
}

void traverse(node *p)
{
  while(p->next!=st)
 {
   printf("%d",p->info);
   p=p->next;
 }
}

void search(node *p,int ele)
{
  while((p->next!=st)&&(p->info!=ele))
  p=p->next;
  if(p->info==ele)
  printf("found");
  else
  printf("not found");
}

void *delete(int ele,node *p)
{
  node *q,*r,*st;
  st=p;
  while((p!=NULL)&&(p->info!=ele))
  {
    q=p;
    p=p->next;
  }
  if(p->info!=ele)
  printf("info not found");
  else  
  {
     if(p==st)
       st=st->next;
     else
     {
       r=p->next;
       q->next=r;
     }
     p->next=NULL;
     free(p);
     return st;
   }
}

