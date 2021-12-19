#include<stdio.h>
#include<stdlib.h>

void swap(int a, int b);

int main(){
    int a, b;
    printf("Enter the value of A : ");
    scanf("%d", &a);

    printf("Enter the value of B : ");
    scanf("%d", &b);

    printf("The value of A and B are %d and %d respectively before function call.", a, b);
    swap(a, b);
    printf("\nThe value of A and B are %d and %d respectively after function call.", a, b);
    return 0;
}

void swap(int a, int b){
    printf("\nInside swap function before swaping.");
    printf(" The value of A and B are %d and %d before swaping", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("\nInside swap function after swaping.");
    printf(" The value of A and B are %d and %d after swaping", a, b);
}