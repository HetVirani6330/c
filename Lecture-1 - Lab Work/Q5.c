#include<stdio.h>

int main(){

    int a[50],b[50],c[50],n,m,i,j=0,total;

    printf("\nEnter size of array1:");
    scanf("%d",&m);
    for(i=0;i<m ;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEnter size of array2:");
    scanf("%d",&n);
    for(i=0;i<n ;i++){
        scanf("%d",&b[i]);
    }

    for ( i = 0; i<m; i++){
        c[i]=a[i];
    }

    total=m+n;

    for ( i = m; i<total; i++){
        c[i]=b[j];
        j++;
    }
    for ( i = 0; i<total; i++){
        printf(" %d",c[i]);
    }


    return 0;
}