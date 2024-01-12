#include<stdio.h>
// float add(float a, float b);
// float subtract(float a, float b);
// float multiply(float a, float b);
// float divide(float a, float b);
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, result;
    char op;

    while (1) { 
        printf("Enter  number1 and number2: ");
        scanf("%f %f", &num1,&num2);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        switch (op) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                printf("Invalid operator\n");
                continue; 
        }
        printf("Result: %.2f\n\n", result);
    }

    return 0;
}

