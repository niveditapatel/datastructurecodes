#include<stdio.h>

char stack[100];
char stack2[100];
int top = -1;
int top2=-1;
char evaluate[100];
void push(char x)
{ if(top>100)
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
void push2(char x)
{ if(top2>100)
    {
        printf("stack is full");
    }
    else
    {
        ++top2;
    stack2[top2] = x;
    }

}

char pop2()
{
    if(top2 == -1)
        printf("stack is empty");
    else
       { char a=stack[top2];
       stack[top2]='\0';
       top2--;
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
        {   evaluate[j]=infix[i];
        j++;
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
   evaluate[j]=x;
   j++;
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
             evaluate[j]=x;
             j++;
             }
              push(infix[i++]);

          }
          else if(!rightorleft(infix[i]))
        {
            while(priority(stack[top])>priority(infix[i]))
          {
             x=pop();
             printf("%c",x);
             evaluate[j]=infix[i]; j++;
             }
              push(infix[i++]);
        }


        }

        }
    }
    while(top!=-1)
    {
        printf("%c",stack[top]);
        evaluate[j]=stack[top];
        j++;
        top--;
    }
    printf("\n");
evaluate[j]='/0';
    int l=strlen(evaluate);
    printf("%d length of string \n",l);
    printf("%s", evaluate);

for(j=0;evaluate[j]!='/0';j++)
{
    push2(evaluate[j]);
}
stack[top2]='/0';
for(top2=0;stack2[top2]!='/0';top2++)
{
    if( isalnum(stack2[top2] ))
  ;

    else if(stack2[top2]=='*')
    {
      char y=stack2[top2-1]*stack2[top2];

      push2(y);

    }
    else if(stack2[top2]=='+')
    {
      char y=stack2[top2-1]+stack2[top2];

      push2(y);

    }
    else if(stack2[top2]=='-')
    {
       char y=stack2[top2-1]-stack2[top2];

      push2(y);
    }
    else if(stack2[top2]=='/')
    {
       char y=stack2[top2-1]/stack2[top2];

      push2(y);

    }

}
 printf("%c",pop2());
}


