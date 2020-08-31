#include<stdio.h>
#include<conio.h>
char stack[100];
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
int rightorleft(char x)
{

    if(x=='^' || x=='=')
        return 0;
    else
        return 1;
}
int priority(char x)
{
if(x=='^')
{

return 3;
}
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
     if(x=='*' ||x=='+'||x=='/'||x=='-'||x=='^')
     return 1;
     else
     return 0;
 }
void main()
{
    char infix[100];
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
            i++;
        }
        else if( infix[i]=='(')
        {
            push(infix[i]);
            i++;
        }
        else if(infix[i]==')')
        {
            while(stack[top]!='(')
            {
                             x=pop();
   printf("%c",x);
   i++;

            }
            pop();
        }
        else
        {
            if(isoperator(infix[i]))
            {
            if(rightorleft(infix[i]))
        {

          while(priority(stack[top])>=priority(infix[i]))
          {
             x=pop();
             printf("%c",x);
             }
              push(infix[i++]);

          }
          else if(!rightorleft(infix[i]))
        {
            while(priority(stack[top])>priority(infix[i]))
          {
             x=pop();
             printf("%c",x);
             }
              push(infix[i++]);
        }


        }

        }
    }
    while(top!=-1)
    {
        printf("%c",stack[top]);
        top--;
    }



}
