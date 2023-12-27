#include<stdio.h>

int main(){

    int a[50],n,i,sum=0;
    float average;

    printf("\nEnter size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++){
        sum+=a[i];
    }
    average = (float)sum/n;
    printf("\n average is :%.2f",average);

    return 0;
}