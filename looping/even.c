#include<stdio.h>
int main(){

    int j;
    printf("\nEnter no.:");
    scanf("%d",&j);
    while(j>=1){
        if(j%2 == 0){
            printf("\n %d",j);
        }
        j--;
    }

    return 0;
}
