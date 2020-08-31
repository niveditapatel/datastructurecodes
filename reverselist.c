#include<stdio.h>
#include<conio.h>
typedef struct node
{

    int data;
    struct node *link;
}node1;
node1 *temp;
 node1 *HEAD=NULL;
void insert(int d)
{

node1 *new;
 new=(node1*)malloc(sizeof(node1));
new->link=HEAD;
new->data=d;
HEAD=new;
 printf("node is %d %d",new->data,new->link);
}
void main(){
    int d;
    int a;

      do{
            printf("Actions: \n 1.insert 2.reverse the list or 3.display the linked list 4.exit the program");
       scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("Enter the data of the new node");
scanf("%d",&d);

                insert(d);
                break;
            case 2: ;
}
      }while(a!=4);
}
