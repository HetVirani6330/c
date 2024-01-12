#include<stdio.h>
int divisible(int num){
    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("Number is divisible by 3 and 5");
    } else {
        printf("Number is not divisible by 3 and 5");
    }
}
void main(){
    int n;
    printf("\nEnter n :");
    scanf("%d",&n);
    divisible(n);
}