#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int temp;
    int sumofdigits = 0;

    while (number > 0)
    {
        temp = number % 10;
        sumofdigits += temp;
        number /= 10;
    }

    printf("The sum of digits is :  %d", sumofdigits);
    
}