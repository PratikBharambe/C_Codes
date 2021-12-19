#include<stdio.h>
#include<stdlib.h>

//  Concept of call by address can be implemented by the concept of pointers................

void swap_by_reference(int *n1, int *n2);

void main(){

    int a = 5, b = 10;
    printf("Before swaping :: A : %d : B : %d.", a, b);
    swap_by_reference(&a, &b);
    printf("\nAfter swaping :: A : %d : B : %d.", a, b);

}

void swap_by_reference(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}