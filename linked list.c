#include<stdio.h>
#include<conio.h>
typedef struct node
{

    int data;
    struct node *link;
}node1;

 node1 *temp;
 node1 *HEAD=NULL;

void main()
{   int a;

      do{
            printf("Actions: \n 1.insert 2.delete or 3.display the linked list 4.exit the program\n");
       scanf("%d",&a);
    switch(a)
    {
        case 1:
                insert();
                break;
            case 2: delete(); break;
            case 3: display(); break;
}
      }while(a!=4);
}

      void insert()
{
    int d;

                    if (HEAD==NULL)
                    {
 HEAD=(node1*)malloc(sizeof(node1));
  printf("enter the data\n");
                     scanf("%d",&d);
                     HEAD->data=d;
                    HEAD->link=NULL;

                    }
                    else{
                             temp=(node1*)malloc(sizeof(node1));

                    scanf("%d",&d);
                    temp->data=d;
                    temp->link=HEAD;
                    HEAD=temp;

      }
      }
      void delete()
      {
          temp=HEAD;
          HEAD=HEAD->link;
          printf("The node is deleted: %d \n",temp->data);
      }
      void display()
      { temp=HEAD;
      if(HEAD==NULL)
      printf("the linked list is empty\n");
     else{
       while(temp->link!=NULL)
      {   printf("%d",temp->data);
          temp=temp->link;
      }
        printf("%d",temp->data);
      }
      }


