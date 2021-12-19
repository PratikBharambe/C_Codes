#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    (year % 4 == 0) ? printf("There are 366 days in the %d year.", year) : printf("There are 365 days in the %d year.", year);

    return 0;
}