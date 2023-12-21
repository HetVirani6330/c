#include<stdio.h>
int main(){

    int n,count=0,first,last,m;
        printf("\nEnter no. :");
        scanf("%d",&n);
    m=n;
    last=m%10;
        while(n>0){
            first=n%10;
            n=n/10;
            count++;
        }            
            printf("\nsum si %d",first+last);
    return 0;
}
