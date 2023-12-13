#include<stdio.h>

int main(){

    int a;
    printf("\n Enter a:");
    scanf("%d",&a);

    if(a>0){
        printf("\n is positive on.");
  
    }
      else if(a<0){
        printf("\n is negative on.");
    }
    else{
        printf("\n is neutral on.");
    }


    return 0;
}