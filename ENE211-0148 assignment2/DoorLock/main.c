#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int correctpin = 3372;
    int userpin;
    int count=0;
    int choice;

    //prompt and capture PIN
    printf("Welcome\n Please enter the PIN\n");


    //confirm length of PIN
    scanf("%d",&userpin);

    if (userpin <= 999)
        {
            printf("Enter a longer PIN\n");
            return 1;
        }

    else if (userpin > 9999)
        {
            printf("Enter a shorter PIN\n");
            return 1;
        }

    else
        {
            printf("Correct length of PIN\n");
        }


    //set a limit for tries when the PIN is incorrect:
    while (userpin != correctpin && count<3)
    {
        count ++ ;
        printf("%i attempts remaining\n", 3-count);

    if (count < 3)
    {
        printf("Please enter the PIN again: \n");
        scanf("%d", &userpin);
    }

    }


    //when the PIN is correct:
    if (userpin == correctpin)
    {
        printf("Device Menu\n");
        printf("1. Open Door\n");
        printf("2. Change PIN\n");
        printf("3. Exit\n");
    }

    scanf("%i", &choice);

    switch (choice)
    {
        case 1:
            printf("Access Granted");
            break;

        case 2:
            printf("Standby...");
            break;

        case 3:
            printf("Exiting system...");
            break;

        default:
            printf("Invalid");
            break;
    }



    return 0;
}
