#include <stdio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) 
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < size1 && j < size2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            result[k++] = arr1[i++];
        } 
        else 
        {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) 
    {
        result[k++] = arr1[i++];
    }

    while (j < size2) 
    {
        result[k++] = arr2[j++];
    }
}

int main() 
{
    int arr1[] = {10, 30, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {20, 40};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, merged);

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}