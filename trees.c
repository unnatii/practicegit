#include<stdio.h>

typedef struct trees
{
  int info;
  struct trees *left;
  struct trees *right;
}node;

node* root;

void main()
{
 printf("\nenter no of nodes");
 scanf("%d",&n);
 create(int n);
 
}


void create(int n)
{
 int i;
 
 for(i=0;i<=n;i++)
 {
   printf("\nenter value of node");
   scanf("%d",&ele);
   m=(node*)malloc(sizeof(node*));
   m->info=ele;
   m->left=NULL;
   m->right=NULL;
   if(root==NULL)
     root=m;
   else
     insert(m); 

  }
}
   
void insert(node* m)
{
  node *p,*q;
  p=q=root;
  while(q!=NULL)
  {
    p=q;
    if(ele<q->info)
    q=q->left;
    else
    q=q->right;
  }
   if(ele<p->info)
    p->left=m;
    else
    p->righ=m;
}


void search(int n)
{
  node *p,*q;
  p=root;
  while(p!=NULL && p->info!=n)
  {
    q=p;
    if(p->info<ele)
      p=p->right;
    else
      p=p->left;
   }
   if(p->info==ele)
    printf("element found and is after %d",q);
   else
    printf("element not found");
}


}
