// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    // Intermediate

    // Input a number x and check if it exists in the array.

    // Count Even & Odd Numbers

    // Count how many numbers are even and how many are odd.

    // Find Second Largest Element

    // Without sorting, find the second largest number.

    // Count Frequency of Elements

    // For example: input [1, 2, 2, 3, 1] → output: 1 occurs 2 times, 2 occurs 2 times, 3 occurs 1 time

    // input element in array
    void inputArray()
    {
        int n;
        printf("Enter the array size :");
        scanf("%d", &n);

        int arr[n];

        printf("Enter %d elements of array : ", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf(" %d", arr[i]);
        }
    }

    // Input n numbers and print their sum.
    void printSum()
    {
        int n;
        printf("enter the size of your array : ");
        scanf("%d", &n);

        int arr[n];

        printf("enter %d element in the array : ", n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int temp;

        printf("sum of your array : ");
        for (int i = 0; i < n; i++)
        {
            temp = temp + arr[i];
        }

        printf("%d", temp);
    }

    // Find the largest and smallest number in the array.
    void returnLargeAndMinNum()
    {
        int n = 0;
        printf("Enter the elements number in your array : "),
            scanf("%d", &n);

        int arr[n];
        printf("enter the %d elements in the array : ", n);

        int max = arr[0];
        int min = arr[0];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] > max)
            {
                max = arr[i];
            }
            else if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        printf("large number : %d ;", max);
        printf(" small number : %d", min);
    }

    void reverseArray()
    {
        int n;
        printf("enter the number of elemnt in the array :");
        scanf("%d", &n);

        int arr[n];

        printf("enter the %d numbers of element in the array :");

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("before reverse the array : ");
        for (int i = 0; i < n; i++)
        {
            printf(" %d", arr[i]);
        }

        printf("; after reverse : ");
        for (int i = n - 1; i >= 0; i = i - 1)
        {
            printf(" %d", arr[i]);
        }
    }

    // Search an Element
    void searchElement()
    {
        int n;
        int found = 0;
        int poisition = -1;

        int arr[5] = {43, 56, 12, 78, 23};
        int search = 56;

        int lengthOfArray = sizeof(arr) / sizeof(arr[0]);
        // printf("%d", lengthOfArray);

        for (int i = 0; i < lengthOfArray; i++)
        {
            if (arr[i] == search)
            {
                found = 1;
                poisition = i + 1;
                break;
            }
        }

        if (found)
        {
            printf("Element %d found at position %d\n", search, poisition);
        }
        else
        {
            printf("element not found");
        }
    }

    // searchElement();
    reverseArray();
    // inputArray();
    // printSum();
    // returnLargeAndMinNum();
    return 0;
}