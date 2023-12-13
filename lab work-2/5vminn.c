#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("\n Enter a,b,c,d,e:");   
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a<b){
        if(a<c){
            if(a<d){
                if(a<e){
                    printf("\n A is min");
                }else{
                    printf("\n E is min");
                }
            }else{
                if(d<e){
                    printf("\n D is min");
                }else{
                    printf("\n E is min");
                }
            }
        }else{
            if(c<d){
                if(c<e){
                    printf("\n C is min");
                }else{
                    printf("\n E is min");
                }
            }else{
                if(d<e){
                    printf("\n D is min");
                }else{
                    printf("\n E is min");
                }
            }
        }
    }else{
        if(b<c){
            if(b<d){
                if(b<e){
                    printf("\n B is min");
                }else{
                    printf("\n E is min");
                }
            }else{
                if(d<e){
                    printf("\n d is min");
                }else{
                    printf("\n E is min");
                }
            }
        }else{
            if(c<d){
                if(c<e){
                    printf("\n C is min");
                }else{
                    printf("\n E is min");
                }
            }else{
                if(d<e){
                    printf("\n d is min");
                }else{
                    printf("\n E is min");
                }
            }
        }
    }
    return 0;   
}