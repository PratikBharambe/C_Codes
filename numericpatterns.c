#include<stdio.h>
#include<stdlib.h>

//  All function declearations...................

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);

//  Main Function......................

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("\nPattern : 01\n");
    pattern1(num);

    printf("\nPattern : 02\n");
    pattern2(num);

    printf("\nPattern : 03\n");
    pattern3(num);

    printf("\nPattern : 04\n");
    pattern4(num);

    printf("\nPattern : 05\n");
    pattern5(num);
    
    printf("\nPattern : 06\n");
    pattern6(num);

    printf("\nPattern : 07\n");
    pattern7(num);
    
    printf("\nPattern : 08\n");
    pattern8(num);

    return 0;

}

//  All the patterns are shown using the input "5".....................
//  All functions Definations...................

/*
5 4 3 2 1 1 2 3 4 5 
5 4 3 2     2 3 4 5 
5 4 3         3 4 5 
5 4             4 5 
5                 5 
*/
void pattern1(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = n ; j >= i ; j--){
            printf("%d ", j);
        }
        for(int j = 1 ; j <= 2*i-2 ; j++){
            printf("  ");
        }
        for(int j = i ; j <= n ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
        0
      0 1 0
    0 1 0 1 0
  0 1 0 1 0 1 0
0 1 0 1 0 1 0 1 0
*/
void pattern2(int n){
    for(int i = 1 ; i <= n ; i++){
        for (int j = 1; j <= n-i; j++){
            printf("  ");
        }
        for(int j = 1 ; j <= 2*i-1 ; j++){
            (j % 2 == 0) ? printf("1 ") : printf("0 ");
        }
        printf("\n");
    }
}

/*
        1 
      0 1 0 
    1 0 1 0 1 
  0 1 0 1 0 1 0 
1 0 1 0 1 0 1 0 1
*/
void pattern3(int n){
    int flag = 0;
    for(int i = 1 ; i <= n ; i++){
        for (int j = 1; j <= n-i; j++){
            printf("  ");
        }
        for(int j = 1 ; j <= 2*i-1 ; j++){
            if(flag == 0){
                printf("1 ");
                flag = 1;
            }
            else{
                printf("0 ");
                flag = 0;
            }
        }
        printf("\n");
    }
}

/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/
void pattern4(int n){
    int num = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
}

/*
5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1
*/
void pattern5(int n){
    for(int i = n ; i >= 1 ; i--){
        for(int j = n ; j >= 1 ; j--){
            (i > j) ? printf("%d ", i) : printf("%d ", j) ;
        }
        printf("\n");
    }
}

/*
5 5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 3 4 5 
5 4 3 2 2 2 2 3 4 5 
5 4 3 2 1 1 2 3 4 5 
5 4 3 2 1 1 2 3 4 5 
5 4 3 2 2 2 2 3 4 5 
5 4 3 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 5 
*/
void pattern6(int n){
    for (int i = n; i >= 1; i--){
        for(int j = 1 ; j <= n-i+1 ; j++){
            printf("%d ", n-j+1);
        }
        for (int j = 1; j <= 2*i-2 ; j++){
            printf("%d ", i);
        }
        for(int j = i ; j <= n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i+1; j++){
            printf("%d ", n-j+1);
        }
        for (int j = 1; j <= 2*(i-1); j++){
            printf("%d ", i);
        }
        for(int j = i ; j <= n ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
                    1
               4  9  16
          25  36  49  64  81
     100  121  144  169  196  225  256
289  324  361  400  441  484  529  576  625
*/
void pattern7(int n){
    int temp = 1;
    for (int i = 1; i <= n; i++){
        for(int j = n ; j >= i+1 ; j--){
            printf("     ");
        }
        for(int j = 1 ; j <= 2*i-1 ; j++){
            printf("%d  ", temp*temp);
            temp++;
        }
        printf("\n");
    }
}

/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/
void pattern8(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    for(int i = n ; i >= 2 ; i--){
        for(int j = 1 ; j <= i-1 ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

