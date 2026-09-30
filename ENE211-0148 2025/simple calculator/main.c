#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char operator;
    double a, b;
    double answer;

    printf("Welcome.\n This is a simple calculator\n");


    //get the operation required from the user
    printf("Enter the operator required\n (+,-,*,/)\n");
    scanf("%s",&operator);

    //get two numbers from the user
    printf("Input the first number\n");
    scanf("%lf",&a);

    printf("Input the second number\n");
    scanf("%lf",&b);


    //calculation
    switch (operator)
    {   case '+':
            printf("answer=%lf\n",a+b);


        case '-':
             printf("answer=%lf\n",a-b);


        case '*':
             printf("answer=%lf\n",a/b);


        case '/':
             printf("answer=%lf\n",a*b);

        }

    //display the answer
    printf("Your answer is...%lf",answer);

    return 0;
}
