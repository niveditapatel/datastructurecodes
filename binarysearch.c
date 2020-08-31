#include<stdio.h>

int array[50];
void binarysearch(int beg,int end,int d)
{
        int p;
    int flag; int i;
    
    
    while(beg<=end)
   {
       int mid=beg+end/2;
       if(array[mid]==d)
   {
      flag=1;
      p=mid;
      break;
   }
   
   else if(array[mid]<d)
   {
       beg=mid+1;
   }
   else
{
    end=mid-1;
}   
       
   }
   if(flag==1) printf("the element %d is present at place %d\n",d,p);
   else printf("element is not present\n");

  
    }
    
    
    
    
    void main()
{
    int d; 
    int n,i;


    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements of the array in an sorted order");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
     printf("the array is\n");
     for(i=0;i<n;i++)
    printf("%d",array[i]);
  printf("Enter the element of the array to be searched (binary search)\n");
        scanf("%d",&d);
   
  binarysearch(0,(n-1),d);
}
