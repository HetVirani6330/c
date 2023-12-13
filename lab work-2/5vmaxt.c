#include<stdio.h>

int main(){

    int a,b,c,d,e;
    printf("\n Enter a,b,c,d,e:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    (a>b)?(a>c)?(a>d)?(a>e)?printf("\n A is max"):printf("\n E is max"):(d>e)?printf("\n D is max"):printf("\n E is max"):(c>d)?(c>e)?printf("\n C is max"):printf("\n E is max"):(d>e)?printf("\n D is max"):printf("\n E is max"):(b>c)?(b>d)?(b>e)?printf("\n B is max"):printf("\n E is max"):(d>e)?printf("\n D is max"):printf("\n E is max"):(c>d)?(c>e)?printf("\n C is max"):printf("\n E is max"):(d>e)?printf("\n D is max"):printf("\n E is max");

    return 0;
}