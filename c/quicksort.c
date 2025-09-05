#include <stdio.h>

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // প্রথম element কে pivot ধরা হলো
    int i = low;
    int j = high;

    while (i < j)
    {
        // pivot এর চেয়ে ছোট বা সমান হলে ডানদিকে যাও
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        // pivot এর চেয়ে বড় হলে বাম দিকে যাও
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if (i < j)
        {
            // swap arr[i] & arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // শেষমেশ pivot এর সাথে arr[j] swap করি
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // pivot এর সঠিক position
}

// QuickSort function
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);  // pivot এর বাঁ দিক
        quicksort(arr, pi + 1, high); // pivot এর ডান দিক
    }
}

// Print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    printArray(arr, n);

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
