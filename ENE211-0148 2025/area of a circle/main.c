#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    double area;
    const double pi=3.142;
    double r;
    char answer[5];

    //user interaction
    printf("Looking for the area of a circle with known radius?\n");
    scanf("%s",answer);
    if ("yes");{
        //request radius
        printf("Enter the radius\n");
        scanf("%lf",&r);

        area=pi*r*r;
        printf("The area of the circle is %lf",area);
        }


    return 0;
}
