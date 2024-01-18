#include<stdio.h>

int main(){
    int a,b,*p1,*p2;

    printf("Enter a&b :");
    scanf("%d%d",&a,&b);

    printf("Before swapping %d %d",a,b);

    p1=&a;
    p2=&b; 

    *p1+=*p2;
    *p2=(*p1-*p2) ; 
    *p1-=*p2; 




    printf("\nAfter  swapping %d %d",a,b);


    return 0;
}