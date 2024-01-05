#include<stdio.h>
#include<string.h>

int main (){

    char s[50],c1,c2;
    int i;
    
    printf("Enter the string : ");
    gets(s);

    printf("Enter the character to replace : ");
    c1 = getchar();
    getchar();

    printf("Enter the character to replace with %c : ",c1);
    c2 = getchar();
    getchar();

    printf(" before replace :%s ",s);

    
    for ( i = 0; s[i]; i++)
    {
        if (s[i] == c1)
        {
            s[i] = c2;
        }
        
    }
    printf("\n after replace :%s ",s);
    



    return 0;
}        