/*  Program to search an element in an array given by the user 
    in linear and binery search method based on the choice of the user............. */

#include<stdio.h>

//  Function to sort the array using bubble sort............
int bubblesort(int array[], int lengthofarray){
    for (int i = 0; i < lengthofarray; i++)
    {
        for (int j = i+1; j < lengthofarray; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The sorted array is : ");
    for (int i = 0; i < lengthofarray; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Function for linear search..............
    int linearsearch(int arr[], int lengthofarray, int itemtofind){
        for (int i = 0; i < lengthofarray; i++){
            if (arr[i] == itemtofind){
                return i;
            }
        }
        return -1;
    }

//  Function for binery search.............
int binerysearch(int arr[], int lengthofarray, int itemtofind){
    int min = 0;
    int max = lengthofarray-1;
    while (min <= max){
        int mid = min + (max - min)/2;
        if (arr[mid] == itemtofind){
            return mid;
        }
        if (arr[mid] < itemtofind){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }
    return -1;
}

//  Main function
int main()
{
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

//  Taking the value of element to find in the array............
    int tofind;
    printf("Enter the element to find in the array : ");
    scanf("%d", &tofind);

//  Taking the choice of user for linear or binery search............    
    int choice;
    printf("Enter the choice from which method you want to find the element in the array.\n1) Linear search.\n2) Binery search.\nEnter your choice : ");
    scanf("%d", &choice);

// Switching to the choice..............
    int result;
    switch (choice){
    case 1:
        result = linearsearch(array, lenofarray, tofind);
        (result == -1) ? printf("The element is not present in the array.") : printf("Element is present at index : %d", result);
        break;
    case 2:
        printf("for binery search we need the entered array to be sorted.\n");
        array[lenofarray] = bubblesort(array, lenofarray);
        result = binerysearch(array, lenofarray, tofind);
        (result == -1) ? printf("\n~The element is not present in the array.") : printf("\nElement is present at index : %d", result);
        break;
    default:
        printf("Enter the valid choice.");
        break;
    }

    return 0;
}