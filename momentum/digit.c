#include <stdio.h>

int main()
{

    char ch;
    printf("\n Enter character:");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("\n is digit");
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("\n is alphabet");
    }
    else
    {
        printf("\n is special character");
    }

    return 0;
}   