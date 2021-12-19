#include<stdio.h>
#include<stdlib.h>

//  Function to reverse a number...........................
int reverse_a_number(int number){
    int reveresednumber = 0;
    int temp;
    while (number > 0)
    {
        temp = number % 10;
        reveresednumber = (reveresednumber * 10) + temp;
        number /= 10; 
    }
    //  Returning thr reversed number..................
    return reveresednumber;
}

//  main function...................
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    //  Calling the reverse_a_number Function...................
    int reverse = reverse_a_number(num);
    
    //  check the reversed number is equal or not to the entered by the user.....................
    (num == reverse) ? printf("The entered number %d is palindrome.", num) : printf("The entered number %d is not palindrome.", num);

    return 0;

}