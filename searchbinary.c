#include<stdio.h>

int binerysearch(int arr[], int lengthofarr, int itemtofind){
    int min = 0;
    int max = lengthofarr-1;

    while (min <= max){
        int mid = min + (max - min)/2;
        if (arr[mid] == itemtofind)
        {
            return mid;
        }

        if (arr[mid] < itemtofind)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return -1;
}

int bubblesort(int arr[], int lengthofarray){
    for (int i = 0; i < lengthofarray; i++)
    {
        for (int j = i+1; j < lengthofarray; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
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

int main(){
    int lenofarr;
    printf("Enter the length of the array : ");
    scanf("%d", &lenofarr);

    int arr[lenofarr];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < lenofarr; i++)
    {
        scanf("%d", &arr[i]);
    }

    int tofind;
    printf("Enter the element to find in the array : ");
    scanf("%d", &tofind);

    arr[lenofarr] = bubblesort(arr, lenofarr);

    int result = binerysearch(arr, lenofarr, tofind);

    (result == -1) ? (printf("\nThe entered element is not present in the array.")) : (printf("\nThe entered element %d is present at the index %d of the sorted array.", tofind, result)) ;

    return 0;
}