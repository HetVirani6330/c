#include <stdio.h>

int main()
{

    int i,n, count=0;
    printf("\nEnter no. :");
    scanf("%d", &n);

    while (n > 0)
    {
        i = n % 10; //123
        n /= 10; 
        count++;
    }
    printf("\n Total digit %d", count);
    return 0; 
}
