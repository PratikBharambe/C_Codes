#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5] = {10, 20, 30, 40, 50};
    printf("a[0] : %u\n", &*a);
    printf("a[1] : %u\n", &*(a+1));
    printf("a[2] : %u\n", &*(a+2));
    printf("a[3] : %u\n", &*(a+3));
    printf("a[4] : %u\n", &*(a+4));
}