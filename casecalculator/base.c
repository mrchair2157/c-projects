#include <stdio.h>
#include <stdlib.h>
int main()

{
    char operator;
    double n1,n2;
    int x = 1;
    
    printf("enter an operator of\n");
    printf("- for subtraction\n");
    printf("+ for addition\n");
    printf("* for multiplication\n");
    printf("/ for division\n");
    printf("q to quit\n");
    printf("1 or 2 to enter the respective number values\n");
    while(x == 1)  
    {
    scanf("%c",&operator);
    printf("h for help\n");
    switch(operator)
    {
        case 'h':
        printf("enter an operator of\n");
        printf("- for subtraction\n");
        printf("+ for addition\n");
        printf("* for multiplication\n");
        printf("/ for division\n");
        printf("q to quit\n");
        printf("1 or 2 to enter the respective number values\n");
        break;

        case '1':
        printf("enter your first number\n");
        scanf("%lf",&n1);
        break;

        case '2':
        printf("enter your second number\n");
        scanf("%lf",&n2);
        break;
        
        case '-':
        printf("%lf - %lf = %lf\n",n1,n2,n1 - n2);
        break;
        
        case '+':
        printf("%lf + %lf = %lf\n",n1,n2,n1 + n2);
        break;

        case '/':
        printf("%lf / %lf = %lf\n",n1,n2,n1 / n2);
        break;

        case '*':
        printf("%lf * %lf = %lf\n",n1,n2,n1 * n2);
        break;

        case 'q':
        return 0;
    }
    }
return 0;
}