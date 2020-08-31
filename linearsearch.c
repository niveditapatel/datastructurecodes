#include<stdio.h>
#include<conio.h>
void main()
{
    int d; int flag=0;
    int n,i;
    int p;
    int array[50];
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
     printf("the array is\n");
     for(i=0;i<n;i++)
    printf("%d",array[i]);
  printf("Enter the element of the array to be searched (linear search)\n");
        scanf("%d",&d);
   for(i=0;i<n;i++)
   {if(array[i]==d)
   {
      flag=1;
      p=i;
   }
   else;
   }
   if(flag==1) printf("the element %d is present at place %d\n",d,p);
   else printf("element is not present\n");
 
  
}