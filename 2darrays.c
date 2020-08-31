#include<stdio.h>
#include<conio.h>
void main()
{
int array[3][3];
int *ptr;
ptr=&array[0][0];
int i,j;
for(i=0;i<9;i++){

printf("Enter the no to insert for %d ",i);
scanf("%d",&(*(ptr+i)));

}


printf("the 2 d array \n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d",array[i][j]);
}
printf("\n");
}


int a;
       printf(" select from the following actions: 1.update 2.delete");
scanf("%d",&a);
if(a==1)
{ int r;
    printf("enter the position to insert to or delete");
scanf("%d ",&r);
    printf("Enter the new no");
    int n;
    scanf("%d",&n);

    *(ptr+r)=n;
}
if(a==2)
{
    printf("enter the position to insert to or delete");
scanf("%d ",&i);
 *(ptr+i)=NULL;
}

}


