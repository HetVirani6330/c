#include<stdio.h>
int main(){

        int a[50][50],b[50][50],c[50][50],n,m,i,j;

        printf("\nEnter Row Value:");
        scanf("%d",&m);

        printf("\nEnter Column Value:");
        scanf("%d",&n);

        printf("\nEnter your Elements Of First Matrix:");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
           
        }
        printf("First Matrix is \n");
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
       
        printf("\nEnter your Elements Of Second Matrix:");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
           
        }
        printf("Second Matrix is \n");
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
       
        printf("Two Matrix Addition is \n");
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }

    return 0;
}