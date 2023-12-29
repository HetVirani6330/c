#include<stdio.h>
int main()
{
    int a[50],i,n,ins,upd,newval;

    printf("enter size:");
    scanf("%d",&n);
    printf("\nenter elements:");
    for(i=0;i<n;++i)
     {
        scanf("%d",&a[i]);
     }

     printf("\n enter new value for insert:");
     scanf("%d",&ins);

     a[n]=ins;
     n++;
        printf("insert value :");
      for(i=0;i<n;++i)
     {
        printf(" %d",a[i]);
     }
    

      a[n-1]=0;
      n--;

      printf("\n afetr delets entered elements :");
      for(i=0;i<n;++i)
       {
         printf("%d ", a[i]);
       }

       printf("\n enter value of upadet :");
       scanf("%d",&upd);
       printf("\n enter new value for update :");
       scanf("%d",&newval);

       for(i=0;i<n;i++)
        {
            if(a[i]==upd)
             {
              a[i] = newval;
             } 
        }
        printf("\nafter updating : ");
        for(i=0;i<n;i++)
          {
           printf("%d ",a[i]);
          }
}