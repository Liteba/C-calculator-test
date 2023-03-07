#include <stdio.h>
int main()
{
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter an Operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = .2lf",num1,num2,(num1 + num2));
        break;
    case '-':
        printf("%.2lf - %.2lf = .2lf",num1,num2,(num1 - num2));
        break;
    case '*':
        printf("%.2lf * %.2lf = .2lf",num1,num2,(num1 * num2));
        break;
    case '/':
        if (num2 != 0.0)
        printf("%.2lf / %.2lf = .2lf",num1,num2,(num1 / num2));
        else
        printf("Divide by zero situation");
        break;
    default:
        printf("invalid operator");

    }
    return 0;
}
