#include<stdio.h>
int main(){

    int n,i,rev=0,a;
        printf("\nEnter no. :");
        scanf("%d",&n);
        a=n;
        while(n>0){
            i=n%10;
            rev = (rev*10)+i;
            n=n/10;
        }

            printf("\nReverse no si%d",rev);
            if(a==rev){
                printf("\n It is palindrom");
            }else{
                printf("\n It is not palindrom");
            }
    return 0;
}
