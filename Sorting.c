/*  Program to sort the array given by the user using the method selected by the user..............*/

#include<stdio.h>
#include<stdlib.h>

//  Function to print the values of array....................
int printthearray(int array[], int lengthofarray){
    printf("The sorted array is : ");
    for (int i = 0; i < lengthofarray; i++){
        printf("%d ", array[i]);
    }  
}

//  Function for sorting the array using bubble sort.............
int bubblesort(int array[], int lengthofarray){
    for (int i = 0; i < lengthofarray; i++){
        for (int j = i+1; j < lengthofarray; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    // Printing the values of sorted array.....................
    printthearray(array, lengthofarray);
    return 0;
}

//  Function to sort the array using insertion sort.................
int insertionsort(int array[], int lengthofarray){
    int i, j, temp;
    for (i = 1; i < lengthofarray; i++){
        temp = array[i];
        j = i-1;
        while (j >= 0 && array[j] > temp){
            array[j+1] = array[j];
            j = j-1;
        }
    array[j+1] = temp;    
    }
    // Printing the values of sorted array.....................
    printthearray(array, lengthofarray);
    return 0;  
}

//  Function for sorting array using selection sort....................
    int selectionsort(int array[], int lengthofarray){
        for (int i = 0; i < lengthofarray-1; i++){
            int min = i;
            for (int j = i+1; j < lengthofarray; j++){
                if (array[j] < array[min]){
                    min = j;
                }  
            }
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    // printing the values of array...................
    printthearray(array, lengthofarray);
    return 0;        
}

int main(){
//  Taking the length of array from the user.............
    int lenofarray;
    printf("Enter the length of the array : ");
    scanf("%d", &lenofarray);

//  Initialization of the array................
    int array[lenofarray];

//  Taking the values of array from the user..........
    for (int i = 0; i < lenofarray; i++){
        scanf("%d", &array[i]);
    }

//  Taking the choice of user for linear or binery search............    
    int choice;
    printf("Enter the choice from which method you want to sort the array.\n1) Bubble Sort.\n2) Insertion Sort.\n3) Selection Sort.\nEnter your choice : ");
    scanf("%d", &choice);

//  Switching to the choice........................
    switch (choice)
    {
    case 1:
        bubblesort(array, lenofarray);
        break;
    case 2:
        insertionsort(array, lenofarray);
        break;
    case 3:
        selectionsort(array, lenofarray);
        break;
    default:
        printf("Please enter the valid choice.");
        break;
    }
    return 0;
}
