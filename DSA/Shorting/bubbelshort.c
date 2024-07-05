#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() 
{
    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        arr[i] = rand() % 20;
    }
    printf("Original Array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, n);
    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}