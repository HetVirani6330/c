#include <stdio.h>
int main(){

    int i=1,f=1,n;
    printf("\n Enter no. :");
    scanf("%d",&n);

    while(i<=n){
        f*=i;
        i++;
    }
    printf("\nfactorial is %d",f);
    return 0;
}