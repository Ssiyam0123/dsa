#include <stdio.h>

void insertionSort()
{
    int arr[] = {32, 53, 12, 3, 5, 75, 31, 33};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < length; i++)
    {
        int temp = arr[i];     // element to insert
        int j = i - 1;

        // shift bigger elements to the right
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // place temp at correct position
        arr[j + 1] = temp;
    }

    // print sorted array
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    insertionSort();
    return 0;
}
