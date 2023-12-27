#include<stdio.h>

int main(){

    int a[50],n,i,sum=0;

    printf("\nEnter size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("\n sum is :%d",sum);

    return 0;
}