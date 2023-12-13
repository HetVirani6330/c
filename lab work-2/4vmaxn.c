#include<stdio.h>
int main(){
    int a,b,c,d;

    printf("\n Enter a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("\n A is maximum");
            }else{
                printf("\n D is maximum");
            }
        }else{
            if(c>d){
                printf("\n C is maximum");
            }else{
                printf("\n D is maximum");
            }
        }
    }else{
        if(b>c){
            if(b>d){
                printf("\n B is maximum");
            }else{
                printf("\n D is maximum");
            }
        }else{
            if(c>d){
                printf("\n C is maximum");
            }else{
                printf("\n D is maximum");
            }
        }
    }

    return 0;
}