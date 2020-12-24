#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, validinput = 0;
    printf("\nEnter the Value of a: ");
    scanf("%d", &a);
    printf("\nEnter the Value of b: ");
    scanf("%d", &b);
    printf("\nEnter the Value of c: ");
    scanf("%d", &c);
    if ((a > 0) && (a < 100) && (b > 0) && (b < 100) && (c > 0) && (c < 100))
    {
        if (((a + b) > c) && ((c + a) > b) && ((b + c) > a))
        {
            validinput = 1;
        }
    }
    else
    {
        validinput = -1;
    }
    if (validinput == 1)
    {
        if (a == b && b == c)
        {
            printf("\nThe Triangle is Equilateral");
        }
        else if (a == b || b == c || c == a)
        {
            printf("\nThe Triangle is Isosceles");
        }
        else
        {
            printf("\nThe Triangle is Scalene");
        }
    }
    else if (validinput == 0)
    {
        printf("\nThe Value do not Constitute a Triangle");
    }
    else
    {
        printf("\nTh Input belongs to Invalid Range");
    }

    getch();
    return 1;
}