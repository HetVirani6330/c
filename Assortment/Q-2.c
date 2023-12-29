#include<stdio.h>
int main()
{
    int a[50],i,n,max;

    printf("enter size:");
    scanf("%d",&n);
    printf("\nenter elements:");
    for(i=0;i<n;++i)
     {
        scanf("%d",&a[i]);
     }

     max=a[0];

    
     for(i=0;i<n;++i)
       {
         if(a[i]>max)
           {
             max=a[i];
           }
       }
    printf("\n max is :%d ",max);
    return 0;
}