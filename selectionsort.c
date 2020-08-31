
#include <stdio.h>
void main(){
int d; int flag=0;
    int n,i; int k; int j;
    int p; int small;
    int array[50];
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
     printf("the array is\n");
     for(i=0;i<n;i++)
    printf("%d",array[i]);
    printf("\n");
  printf("selection sort:\n");
  
        for(k=0;k<n;k++)
        {
        small=array[k];
        p=k;
        for(j=(k+1);j<n;j++)
        {
            if(array[j]<small)
            {
                small=array[j];
                p=j;
                
            }
        }
        
        array[p]=array[k];
        array[k]=small;
        }
        printf("the array is\n");
     for(i=0;i<n;i++)
    printf("%d",array[i]);
}