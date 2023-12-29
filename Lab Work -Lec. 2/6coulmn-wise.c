//coulmn-wise
#include <stdio.h>

int main()  
{

    int a[30][30],i, j,m,n,sum=0;
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
        sum=0;
        for(j=0;j<n;j++){   
            printf("%d",a[i][j]);
        }
            printf("\n");
    }

    for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++){   
            sum+=a[j][i];
        }
            printf("sum is :%d\n",sum);
    }


    return 0;
}
