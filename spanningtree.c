#include<stdio.h>
  char array[15][2];
void main()
{
        char edges[15][3];

    int n; int i,j,temp;
    printf("enter the number of edges in the graph");
    scanf("%d",&n);
    printf("enter the vertices of the edges");
    for(i=0;i<n;i++)
       {
           printf("enter the length of the edge");
           scanf("%d",&edges[i][0]);
       printf("enter vertice 1 and 2 for edge %d",(i+1));
    scanf("%d %d",edges[i][1],edges[i][2]);
       }
       for(i=0;i<n;i++){
        for(j=0;j=(n-i-1);j++){


            if(edges[j][0]>edges[j+1][0])
            {
                temp=edges[j][0];
                edges[j][0]=edges[j+1][0];
                edges[j+1][0]=temp;
            }
        }
        }
      for(i=0;i<n;i++)
      {
          int s;
          int flag=exists(edges[i][1],edges[i][2]);
      if(flag==0)
      {
          array[s][0]=edges[s][0];
          array[s][1]=edges[s][1];
          array[s][2]=edges[s][2];
      }
}
}
int exists(int a, int b)
{ int i,j;
    for(i=0;i<15;i++)
    {
        if(array[i][1]==a)
        {
            for(i=0;i<15;i++)
            {
                if(array[i][2]==b)
                    return 1;
            }
        }
    }
     for(i=0;i<15;i++)
    {
        if(array[i][1]==b)
        {
            for(i=0;i<15;i++)
            {
                if(array[i][2]==a)
                    return 1;
            }
        }
    }
  return 0;

}
