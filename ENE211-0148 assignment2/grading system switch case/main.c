#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int regno;
    char name[50];
    int marks;
    char grade='I';
    char status;

    //get the required information from the user
    printf("Enter the following details: \n");

    printf("Registration number: \n");
    scanf("%d", &regno);

    printf("Name \n");
    scanf("%s", name);

    printf("Marks \n");
    scanf("%d", &marks);


    //make sure the marks are in the correct range
    if (marks < 0 || marks >100 )
    {
        printf("Please enter marks within the 0-100 range \n");
    }



    //assign grades to the marks entered
    switch (marks)
    {
        case 70 ... 100:
        {
            grade = 'A';
            break;
        }

        case 60 ... 69:
        {
            grade = 'B';
            break;
        }

        case 50 ... 59:
        {
            grade = 'C';
            break;
        }

        case 40 ... 49:
        {
            grade = 'D';
            break;
        }

        default:
        {
            grade = 'F';
            break;
        }


    }



    printf("STUDENT INFORMATION \nRegistration Number: %d\n", regno);
    printf("Name: %s\n", name);
    printf("Marks: %d\n", marks);
    printf("Grade %c\n", grade);


    if (marks < 40)
    {
        printf("FAIL\n");
    }

    else
    {
        printf("PASS\n");
    }


    return 0;
}
