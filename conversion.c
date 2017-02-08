#include <stdio.h>
#define size 25

struct stack
{
  int top;
  char a[size];
}s;

int pop()
{
  if(s.top==-1)
  return -1;
  else
  return s.a[s.top--];
}


void push(char ch)
{
  if(s.top==size-1)
  printf("stack overflow");
  else
  s.a[s.top++]=ch;
}

int prec(char a)
{ 
  switch(a)
  {
    case '-':
    case '+':return 1;break; 
    case '/':
    case '*': 
    case '%':return 2;break;
    default :return 0;
   }
}

char infixtopostfix(char a[])
{
  char ch;int prec(char ch);char b[size];int i=0,j=0;
  while(ch=a[i++]!='\0')
  {
    if((ch<='0')&&(ch>='9'))
    {
        b[j++]=ch;
    }
    else
    {
       if(ch=='(') 
       {
       push(ch);
       }
       else
       {
          if(ch==')')
          {
            while(s.a[s.top]!='(')
            {
              b[j++]=pop();
            }
          }s.top--;
          else
          {
               if(s.top==-1)
               push(ch);
               if(prec(ch)<prec(s.a[s.top]))
               {
                  do
                  {
                    b[j++]=pop();
                  }while(prec(ch)<prec(s.a[s.top]))
                
               }
               if(prec(ch)==prec(s.a[s.top]))
               {
                 b[j++]=pop();
                 push(ch);    
               }
                else
                {
                  push(ch);
                }
           
           }
      }
   }
  printf("\npostfix expression=",b);
}
}

void main()
{
  char inf[size];
  printf("enter infix exp");
  scanf("%s",inf);
  printf("postfix exp=",infixtopostfix(inf));
}
  
