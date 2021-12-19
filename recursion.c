#include<stdio.h>
#include<stdlib.h>

// If a function call itselt inside it's defination then that dunction is known as recursive function..............
int fact_with_recursion(int num);

int main(){
    int n, result;
    printf("Enter a number : ");
    scanf("%d", &n);
    result = fact_with_recursion(n);
    printf("Factorial of number is : %d.", result);
    return 0;
}

int fact_with_recursion(int num){
    if (num == 1){
        return 1;
    }
    else{
        return num * fact_with_recursion(num-1);
    }
}