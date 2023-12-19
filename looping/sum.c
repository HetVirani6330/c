#include<stdio.h>
int main(){

    int i=1,n,sum=0;
    printf("\nEnter on.:");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
      printf("\n Sum is %d",sum);

    return 0;
}

