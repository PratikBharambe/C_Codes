#include<stdio.h>
#include<stdlib.h>

enum options {Exit, Add, Sub, Mul, Div, Mod};

int main(){

    enum options choice;

    int a, b;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    do
    {
        printf("0. Exit.\n1. Addition.\n2. Substraction.\n3. Multiplication.\n4. Division.\n5. Modulus.\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case Add:
            printf("The addition is : %d.\n", a+b);
            break;
        case Sub:
            printf("The Substraction is : %d.\n", a-b);
            break;
        case Mul:
            printf("The Multiplication is : %d.\n", a*b);
            break;
        case Div:
            printf("The Division is : %d.\n", a/b);
            break;
        case Mod:
            printf("The Modulus is : %d.\n", a%b);
            break;
        }
    } while (choice != Exit);

    return 0;
}
