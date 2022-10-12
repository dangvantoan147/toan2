#include <stdio.h>
int main() 
{  
    double num1;
    double num2;
    double add;
    double sub;
    double mul;
    double div;
    char choice;
    printf("Input number 1: ");
    scanf("%lf", &num1);
    printf("Input number 2: ");
    scanf("%lf", &num2);
    printf("\t   MENU");
    printf("\n=================");
    printf("\n+");
    printf("\n-");
    printf("\n*");
    printf("\n/");
    printf("\n=================");
    printf("\nSelect Operand: ");
    getchar();
    scanf("%c", &choice);
    getchar();
    switch (choice)
    {
        case '+': 
            add = num1 + num2;
            printf("\nnum1 + num2 = %0.2lf", add);
            break;
        case '-': 
            sub = num1 - num2;
            printf("\nnum1 - num2 = %0.2lf", sub);
            break;
        case '*': 
            mul = num1 * num2;
            printf("\nnum1 * num2 = %0.2lf", mul);
            break;
        case '/': 
            div = num1 / num2;
            printf("\nnum1 / num2 = %0.2lf", div);
            break;
        default:
            printf("Invalid Choice");
    }
    printf("\n");
    return 0;
}
