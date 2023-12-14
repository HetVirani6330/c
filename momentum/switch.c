#include<stdio.h>

int main (){

    char day;

    printf("\n Enter a day fast later:");
    scanf("%c",&day);

    switch (day){
        case 'm':
            printf("\n monday");
            break;
        case 't':
            printf("\n tuesday");
            break;
        case 'w':
            printf("\n wednesday");
            break;
        case 'T':
            printf("\n thursday");
            break;
        case 'f':
            printf("\n friday");
            break;
        case 's':
            printf("\n saturday");
            break;
        case 'S':
            printf("\n sunday");
            break;
        default:
            printf("\n invalid input");
            break;

    }

    return 0;
}