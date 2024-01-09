#include<stdio.h>
int cube(int a){
    return a*a*a;
}
void main(){
    int n;
    printf("\nEnter n :");
    scanf("%d",&n);
    printf("\nCube is :%d",cube(n));
}   