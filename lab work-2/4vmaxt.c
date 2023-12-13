#include<stdio.h>

int main(){

    int a,b,c,d;
    printf("\n Enter a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    (a>b)?(a>c)?(a>d)?printf("\n A is max"):printf("\n D is max"):(c>d)?printf("\n C is max"):printf("\n D is max"):(b>c)?(b>d)?printf("\n B is max"):printf("\n D is max"):(c>d)?printf("\n C is max"):printf("\n D is max");

    return 0;
}