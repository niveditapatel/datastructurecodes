#include<stdio.h>
#include<conio.h>
void main()
{
    int d; int flag=0;
    int n,i;
    int p; int temp;
    int array[50];
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
     printf("the array is\n");
     for(i=0;i<n;i++)
    printf("%d",array[i]);
 
   for(i=0;i<n-1;i++)
   {
       for(p=0;p<(n-i-1);p++)
       {
           if(array[p]>array[p+1])
           {temp=array[p];
           array[p]=array[p+1];
           array[p+1]=temp;
       }}
  
} printf("\nafter bulbble sort\n");
 for(i=0;i<n;i++)
    printf("%d",array[i]);
}