#include<stdio.h>

void main()
{
    
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);

    int isprime;
    isprime = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isprime = 1;
            break;
        }
        
    }

    if (isprime == 1)
    {
        printf("The %d is a not a prime number.", num);
    }
    else
    {
        printf("The %d is a prime number.", num);
    }

}
