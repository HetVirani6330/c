#include<stdio.h>
int main(){
    int a,b,c;

    printf("\n Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        if(a>c){
                printf("\n a is min");
        }else{
                printf("\n c is min");          
        }
    }else{
        if(b>c){
                printf("\n b is min");
        }else{
                printf("\n c is min");          
        }
    }

    return 0;
}