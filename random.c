

/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/
// #include <stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++){
//         for (int j = 1; j <= i; j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }




/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/
// #include <stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++){
//         for (int j = 1; j <= i; j++){
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
// }


/*
* 
* * 
* * * 
* * * * 
* * * * * 
*/
// #include <stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++){
//         for (int j = 1; j <= i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

/*
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 
*/
#include <stdio.h>
int main(){
    for(int i = 5; i >= 1; i--){
        for(int j = 5; j >= i; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}