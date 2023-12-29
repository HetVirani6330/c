// anti-diagonal
#include <stdio.h>

int main()  
{

    int a[30][30],i, j,m,n,sum=0,s;
    printf("\enter array elements row & column");
    scanf("%d %d",&m,&n);
    printf("Enter metrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered metrix\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    s=i-1;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            if(i+j == s){
            sum+=a[i][j];
            }
        }
        printf("\n");
    }

    printf("sum is :%d\n",sum);

    return 0;
}
