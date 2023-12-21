#include<stdio.h>
int main(){

    int n,i,sum=0,s,t,rev=0,p,mult;
        printf("\nEnter no. :");
        scanf("%d",&n);
      p=n;  
        while(n>0){
            i=n%10;
            n=n/10;
            sum+=i;
        }

    s=sum;
        while(s>0){
            t=s%10;
            rev = (rev*10)+t;
            s/=10;
        }
        printf("\n sum is %d",sum);
        printf("\n rev is %d",rev);
        mult=sum*rev;
        printf("\n mule is sum*rev %d",mult);


        if(p==mult){
            printf("\nIs Magic no.");
        }else{
            printf("\nIs not Magic no.");
        }

    return 0;
}  