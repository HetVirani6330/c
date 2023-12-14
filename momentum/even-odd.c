#include<stdio.h>

int main(){

    int num;

    printf("\n Enter any number:");
    scanf("%d",&num);

    (num%2==0)?printf("\n number is even"):printf("\n number is odd");

    return 0;
}