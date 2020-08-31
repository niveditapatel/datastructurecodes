#include<stdio.h>

char stack[10];
int top = -1;
void push(char x)
{ if(top>9)
    {
        printf("stack is full");
    }
    else
    {
        ++top;
    stack[top] = x;
    }
    
}
 
char pop()
{
    if(top == -1)
        printf("stack is empty");
    else
       { char a=stack[top];
       stack[top]='\0';
       top--;
       return a;
}
    
}
 
int priority(char x)
{
if(x == '*' || x == '/')
        return 2;
if(x == '+' || x == '-')
        return 1;
        if(x == '(')
        return 0;
        
        if(x=='\0')
        return -1;
    
}
 int isoperator(char x)
 {
     if(x=='*' ||x=='+'||x=='/'||x=='-')
     return 1;
     else
     return 0;
 }
void main()
{
    char infix[10];
    char *p;
    char x;
    p=&stack[0];
    printf ("enter the infix expression");
    scanf("%s", &infix);
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(isalnum(infix[i]))
        {
            printf("%c",infix[i]);
        }
        else if( infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]==')')
        {   x=pop();
            while(x!='(')
            {
                printf("%c",x);
                x=pop();
                
            }
        }
        else if(isoperator(infix[i]))
        {
          if(priority(stack[top])>=priority(infix[i]))
          {
             x=pop();
             printf("%c",x);
              push(infix[i]);
          }
         
        
          else
          push(infix[i]);
        }
    i++;
        
    }
    while(top!=-1)
    {
        printf("%c",*p);
        p++;
    }
    
}
