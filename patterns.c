#include<stdio.h>
#include<stdlib.h>

/*  Pattern 1
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
*/
int pattern1(int numberofrows){
    for (int i = 1; i <= numberofrows; i++){
        for (int i = 1; i <= numberofrows; i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0; 
}

/*  Pattern 2
* * * * * 
* * * * 
* * * 
* * 
*
*/
int pattern2(int numberofrows){
    for (int i = 0; i < numberofrows; i++){
        for (int j = 1; j <= numberofrows-i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*  Pattern 3
*
* *
* * *
* * * *
* * * * *
*/
int pattern3(int numberofrows){
    for (int i = 1; i <= numberofrows; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*  Pattern 4
* * * * *
  * * * *
    * * *
      * *
        *
*/
int pattern4(int numberofrows){
    for (int i = 1; i <= numberofrows; i++){
        for (int j = 1; j <= i-1; j++){
            printf("  ");
        }
        for (int j = numberofrows; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*  Pattern 5
        *
      * *
    * * *
  * * * *
* * * * *
*/
int pattern5(int numberofrows){
    for (int i = 1; i <= numberofrows; i++){
        for (int j = 1; j <= numberofrows-i; j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*  Pattern 6
        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        * 
*/
int pattern6(int numberofrows){
    for (int i = 1; i <= numberofrows; i++){
        for (int j = 1; j <= numberofrows-i; j++){
            printf("  ");
        }
        for (int j = 1; j <= 2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= numberofrows-1; i++){
        for (int j = 1; j <= i; j++){
            printf("  ");
        }
        for (int j = 1; j <= 2*(numberofrows-i)-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*  Pattern 7
        *
      * *
    *   *
  *     *
* * * * *
*/
int pattern7(int numberofrows){
    for (int i = 1; i <= numberofrows-1; i++){
        printf("  ");                                                                   
    }
    printf("* \n");
    for (int i = 1; i <= numberofrows-2; i++){
        for (int j = 2; j <= numberofrows-i; j++){
            printf("  ");
        }
        printf("* ");
        for (int j = 1 ; j <= i-1; j++){
            printf("  ");
        }
        printf("* \n");
    }
    for (int i = 1; i <= numberofrows; i++){
        printf("* ");
    }
    return 0;
}

/*  Pattern 8
        *
      *   * 
    *       *
  *           *
*               *
  *           *
    *       *
      *   *
        *
*/
int pattern8(int numberofrows){
    for (int i = 1; i <= numberofrows-1; i++){
        printf("  ");
    }
    printf("* \n");
    for (int i = 1; i <= numberofrows-1; i++){
        for (int j = 2; j <= numberofrows-i; j++){
            printf("  ");
        }
        printf("* ");
        for (int j = 1; j <= 2*i-1; j++){
            printf("  ");
        }
        printf("* \n");
    }
    for (int i = 0; i <= numberofrows-3; i++){
        for (int j = 1; j <= i+1; j++){
            printf("  ");
        }
        printf("* ");
        for (int j = 1; j <= 2*(numberofrows-i)-5; j++){
            printf("  ");
        }
        printf("* \n");
    }
    for (int i = 1; i <= numberofrows-1; i++){
        printf("  ");
    }
    printf("* "); 
    return 0;  
}

/*  Pattern 9
*
* *
*   *
*     *
* * * * *
*/
int pattern9(int numberofrows){
    printf("* \n");
    for (int i = 1; i <= numberofrows-2; i++){
        printf("* ");
        for (int j = 1; j <= i-1; j++){
            printf("  ");
        }
        printf("* \n");
    }
    for (int i = 1; i <= numberofrows; i++){
        printf("* ");
    }
    return 0;
}

/*  Pattern 10
* * * * * * * * * *
* * * *     * * * *
* * *         * * * 
* *             * *
*                 *
*                 *
* *             * *
* * *         * * * 
* * * *     * * * *
* * * * * * * * * *
*/
int pattern10(int numberofrows){
    for (int i = numberofrows ; i >= 1 ; i--) {
			for(int  j = 1 ; j <= i ; j++) {
				printf("* ");
			}
			for(int j = 1 ; j <= numberofrows-i ; j++) {
				printf("    ");
			}
			for(int j = 1 ; j <= i ; j++) {
				printf("* ");
			}
			printf("\n");
		}
		
		for(int i = 2 ; i <= numberofrows ; i++) {
			for(int j = 1 ; j <= i ; j++) {
				printf("* ");
			}
			for(int j = 1 ; j <= numberofrows-i ; j++) {
				printf("    ");
			}
			for(int j = 1 ; j <= i ; j++) {
				printf("* ");
			}
			printf("\n");
		}
}

/*  Pattern 11
        * * * * *
      *       *
    *       *
  *       *
* * * * *
*/
int pattern11(int noofrows){
    for (int i = 1; i < noofrows; i++){
        printf("  ");
    }
    for (int i = 1; i <= noofrows; i++){
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= noofrows-2; i++){
        for (int j = 1; j <= noofrows-i-1; j++){
            printf("  ");
        }
        printf("* ");
        for (int j = 1; j <= noofrows-2; j++){
            printf("  ");
        }
        printf("* \n");
    }
    for (int i = 1; i <= noofrows; i++){
        printf("* ");
    }
    return 0;
}

int main(){
    int noofrows;
    printf("Enter the number of rows : ");
    scanf("%d", &noofrows);

    printf("Pattern : 01\n");
    pattern1(noofrows);
    printf("\n");

    printf("Pattern : 02\n");
    pattern2(noofrows);
    printf("\n");

    printf("Pattern : 03\n");
    pattern3(noofrows);
    printf("\n");

    printf("Pattern : 04\n");
    pattern4(noofrows);
    printf("\n");

    printf("Pattern : 05\n");
    pattern5(noofrows);
    printf("\n");

    printf("Pattern : 06\n");
    pattern6(noofrows);
    printf("\n");

    printf("Pattern : 07\n");
    pattern7(noofrows);
    printf("\n");

    printf("Pattern : 08\n");
    pattern8(noofrows);
    printf("\n");
    
    printf("Pattern : 09\n");
    pattern9(noofrows);
    printf("\n");
    
    printf("Pattern : 10\n");
    pattern10(noofrows);
    printf("\n");
    
    printf("Pattern : 11\n");
    pattern11(noofrows);
    printf("\n");
}