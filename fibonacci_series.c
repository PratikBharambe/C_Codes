#include<stdio.h>
#include<stdlib.h>

//  Declearing the function for finding the fibonacci series using for loop...................
int fibonacci_series_for_loop(int n);

//  Declearing the function for finding the fibonacci series using while loop...................
int fibonacci_series_while_loop(int n);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    fibonacci_series_for_loop(num);
    printf("\n");
    fibonacci_series_while_loop(num);
    
    return 0;
}

//  Defining the function to find the fibonacci series using for loop...................
int fibonacci_series_for_loop(int n){
    int a0 = 0; 
    int a1 = 1;
    printf("%d %d ", a0, a1);

    for(int i = 1; i <= n-2 ; i++){
        int a3 = a1 + a0;
        printf("%d ", a3);
        int temp = a1;
        a1 = a3;
        a0 = temp;
    }

    return 0;
}

//  Defining the function to find the fibonacci series using while loop...................
int fibonacci_series_while_loop(int n){
    int a0 = 0; 
    int a1 = 1;
    printf("%d %d ", a0, a1);

    int i = 1;
    while (i <= n-2){
        int a3 = a1 + a0;
        printf("%d ", a3);
        int temp = a1;
        a1 = a3;
        a0 = temp;
        i++;
    }
    return 0;
}