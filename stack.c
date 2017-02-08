#include <stdio.h>
#define size 25
 struct stack
{
 int a[size];
 int top;
}s;


 int eval(int a,int b,char c);
void push(int x)
{
 if((s.top)==size-1)
 {
   printf("stack overflow");
 }
  else 
  {
   (s.a[++s.top])=x;
  }
}
   

int pop()
{
  if((s.top)==-1)
  {
    printf("empty stack");return -1;
  }
  else 
  {
    return (s.a[s.top--]);
  }
}

void main()
{  s.top=-1;
  
  char c[size];int e;
  printf("enter postfix expression");
   scanf("%s",c);
   e=evalpostfix(c);
  printf("postfix evaluation=%d\n",e);
}
  

int evalpostfix(char c[])
{ 
   int ans,i=0,op1,op2;
   char ch;
   while((ch=c[i++])!='\0')
    {
       if((ch>='0')&&(ch<='9'))
        push(ch-'0');
       else
       {
         op2=pop();
         op1=pop();
         ans=eval(op1,op2,ch);
         push(ans);
       }
    }
    return (pop());
}
  
 int eval(int a,int b,char c)
 {
   switch(c)
   {
     case '+':return (a+b);
     case '-':return (a-b);
     case '/':return (a/b);
     case '*':return (a*b);
    }
  }
