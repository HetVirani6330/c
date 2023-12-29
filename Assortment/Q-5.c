#include<stdio.h>
int main(){

        int a[50][50],k,p,i,j,t[50][50];

        printf("\nEnter Row Value: ");
        scanf("%d",&p);

        printf("\nEnter Colum Value: ");
        scanf("%d",&k);


        printf("\nEnter your Elements:");
        for (i=0;i<p;i++)
        {
            for (j=0;j<k;j++)
            {
                scanf("%d",&a[i][j]);
            }
            
            
        }
        printf(" Matrix is \n");
         for (i=0;i<p;i++)
        {
            for (j=0;j<k;j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("\ntreanpose matrix elements:\n");
          for (i=0;i<p;i++)
            {
              for (j=0;j<k;j++)
              {
                t[i][j]=a[j][i];
                printf("%d",t[i][j]);
              }

              printf("\n");
            }
}

