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


    //confirm marks are in the correct range
    if (marks < 0 || marks >100)
    {
        printf("Please enter marks within the 0-100 range \n");
        exit(1);
    }

    //assign grades to the marks entered
    else if  (marks >= 70)
    {
        grade ='A';
    }

    else if (marks >= 60)
    {
        grade ='B';
    }

    else if (marks >= 50)
    {
        grade ='C';
    }

    else if (marks >= 40)
    {
        grade ='D';
    }


    else
    {
        grade ='F';
    }


    printf("STUDENT INFORMATION \nRegistration Number: %d\n", regno);
    printf("Name: %s\n", name);
    printf("Marks: %d\n", marks);
    printf("Grade %c\n", grade);


    if (grade == 'F')
    {
        printf("FAIL");
    }

    else
    {
        printf("PASS");
    }


    return 0;
}
