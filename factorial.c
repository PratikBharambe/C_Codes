#include<stdio.h>

void main(){

    int num;

    printf("Enter a positive Intger : ");
    scanf("%d", &num);

    if (num > 0)
    {
        int factorial, i;

        factorial = 1;

        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        printf("The factorial of %d is : %d", num, factorial);
        
    }
    else
    {
        printf("Please enter a positive integer.");
    }

}