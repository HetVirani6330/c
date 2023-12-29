#include<stdio.h>
    int main(){

        int a[50][50],n,m,i,j,diag=0;
        
        printf("\nEnter Row: ");
        scanf("%d",&m);
        printf("\nEnter Coulmn: ");
        scanf("%d",&n);
        printf("\nEnter your Elements:");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf(" Matrix is \n");
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        
        
         for (i=0;i<m;i++){
            for (j=0;j<n;j++){
               if(i==j){
                   diag += a[i][j];
               }
            }
        }
        printf("diagonal are %d",diag);

        return 0;
        
}    