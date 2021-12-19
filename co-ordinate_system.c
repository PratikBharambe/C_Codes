#include<stdio.h>
#include<stdlib.h>

int quadrant_finder(int x, int y){
    
    //  Condition For the quadrannts......................
    if(x != 0 && y != 0){
        if (x > 0){
            if (y > 0){
                printf("The point is present in First Quadrant.");
            }
            else{
                printf("The point is present in fourth Quadrant.");
            }
        }
        else{
            if (y > 0){
                printf("The point is present in Second Quadrant.");
            }
            else{
                printf("The point is present in Third Quadrant.");
            }
        }
    }

    //  Condtion for the origin..............
    if(x == 0 && y == 0){
        printf("The entered point is origin.");
    }

    //  condition for the axis.........................
    if (x == 0 || y == 0){
        if (x == 0 && y != 0){
            printf("The entered point is on Y-Axis.");
        }
        if(y == 0 && x != 0){
            printf("The entered point is on x-Axis.");
        }
    }
    
    return 0;
}

int main(){
    int x, y;
    printf("Enter the values of Abssisa annd Ordinate : ");
    scanf("%d %d", &x, &y);
    quadrant_finder(x, y);
    return 0;
}