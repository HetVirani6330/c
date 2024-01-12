#include <stdio.h>
void main()
   {
    char choice;
    int num1, num2, result = 0;

    while (1)
    {
        printf("\nEnter Operator(+, -, *, /) exit 'q':");
        // choice=getch();
        scanf(" %c", &choice);

         if(choice=='q'){
            printf("your exit");
            break;
        }else{

        printf("\nEnter First Value:");
        scanf("%d", &num1);

        printf("\nEnter Second Value:");
        scanf("%d", &num2);

       

        switch (choice)
        {
        case '+':
            printf("\nSum is = %d", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nDifference is = %f",sum(num1,num2));
            printf("\n\nPress Enter Again for New Input\n");
            break;

        case '*':
            result = num1 * num2;
            printf("\nProduct is = %d", result);
            printf("\n\nPress Enter Again for New Input\n");
            break;

        case '/':
            result = num1 / num2;
            printf("\nQuotient is = %d", result);
            printf("\n\nPress Enter Again for New Input\n");
            break;

       

        default:
            printf("\nEnter Valid Operator!!!\n");
            printf("\n\nPress Enter Again for New Input\n");
        }
        }
    }

    float sum(float a  float b ){
    return a+b;
}
    
}