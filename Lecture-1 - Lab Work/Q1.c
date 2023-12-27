#include<stdio.h>

int main(){

    int a[50],n,i;

    printf("\nEnter size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Elements in array :");

    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }

    return 0;
}