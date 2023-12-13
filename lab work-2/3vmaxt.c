#include<stdio.h>

int main(){

    int a,b,c;
    printf("\n Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    (a>b)?(a>c)?printf("\n A is max"):printf("\n C is max"):(b>c)?printf("\n B is max"):printf("\n C is max");

    return 0;
}