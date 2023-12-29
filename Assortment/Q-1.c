#include<stdio.h>

int main(){

   int a[40],i,n;
   printf("\nEnter size of array:");
   scanf("%d",&n);
   printf("\nEnter elements:");

   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   printf("Negative elements :");


   for(i=0;i<n;i++){
    if(a[i]<0){
     printf("%d",a[i]);
    }
   }


    return 0;
}
