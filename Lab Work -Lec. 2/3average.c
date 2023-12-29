// average
#include <stdio.h>

int main()  
{

    int a[30][30],i, j,m,n;
    float average,s,sum;
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
            printf("%d",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }

    printf("sum is :%.0f\n",sum);

    s=m+n;
    average=sum/s;
        printf("\n average is :%.2f",average);
    return 0;
}
