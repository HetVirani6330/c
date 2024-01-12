#include<stdio.h>

int mult(int n) {
    if (n>=1)
        return n*mult(n-1);
    else
        return 1;
}
int main() {
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, mult(n));
    return 0;
}

 