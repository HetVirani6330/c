// length
#include <stdio.h>

int main()  
{
// arr3*3
    int a[30][30],i, j,m,n,count=0;
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
            count++;
        }
        printf("\n");
    }
    printf("length is :%d",count);
    return 0;
}
