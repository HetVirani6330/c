#include<stdio.h>
int main(){

    int i=1,n;

    printf("\nEnter multiplication table :");
    scanf("%d",&n);
    while(i<=10){
        printf("\n%d * %d = %d",n,i,n*i);
       i++; 
    }
    

    return 0;
}