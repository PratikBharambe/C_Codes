#include<stdio.h>

int linearsearch(int arr[], int lengthofarr, int tofind)
{
    int i;
    for (i = 0; i < lengthofarr; i++)
    {
        if (arr[i] == tofind)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    printf("Enter the length of the array : ");
    int lenofarray;
    scanf("%d", &lenofarray);
    
    int arr[lenofarray];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < lenofarray; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to find in the array : ");
    int elementtofind;
    scanf("%d", &elementtofind);

    int result = linearsearch(arr, lenofarray, elementtofind);
    (result == -1) ? printf("The element is not present in the array.") : printf("Element is present at index : %d", result);
    return 0;
}