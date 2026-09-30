#include <stdio.h>
#include <stdlib.h>

int main()
{   //variable declaration
    char userName[50];

    //comm to input name
    printf("Please enter your name\n");
    scanf("%s",userName);
    printf("Hello %s",userName);

    return 0;
}
