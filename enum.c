#include<stdio.h>
#include<stdlib.h>
/*
enum colors{red, green, yellow, orange, black};

int main(){
    printf("Accesing the value of red : %d.\n", red);
    printf("Accesing the value of green : %d.\n", green);
    printf("Accesing the value of yellow : %d.\n", yellow);
    printf("Accesing the value of orange : %d.\n", orange);
    printf("Accesing the value of black : %d.\n", black);

    printf("the size of enum colors is : %d.", sizeof(enum colors));
    return 0;
}
*/

enum colors{red, green = 25, yellow, orange = 50, black};

int main(int argc, char const *argv[])
{
    printf("Accesing the value of red : %d.\n", red);
    printf("Accesing the value of green : %d.\n", green);
    printf("Accesing the value of yellow : %d.\n", yellow);
    printf("Accesing the value of orange : %d.\n", orange);
    printf("Accesing the value of black : %d.\n", black);

    return 0;
}
