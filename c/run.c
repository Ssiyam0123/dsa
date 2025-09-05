#include <stdio.h>

void insertSort()
{
    int n;
    printf("enter your array size : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d element in your array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("your array : \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    printf("sorted array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void inserElementInArray()
{
    int n;
    printf("enter the size of your array : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d element in your array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nyour array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    printf("\nenter your index and element that you want to enter : ");
    int indx, element;
    scanf("%d %d", &indx, &element);
    // printf("%d %d", indx, element);

    for (int i = n - 1; i >= indx; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[indx] = element;
    n = n + 1;

    printf("\n new array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void inElement()
{
    int n;
    printf("enter you array size : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d element in your array :");
    ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nyour array :");
    ;
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    int pos, element;
    printf("\nenter your positon and element for insert : ");
    scanf("%d %d", &pos, &element);

    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element;
    n++;

    printf("\n your new array :");
    ;
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void deleteElement()
{
    int n;
    printf("enter your array size :");
    scanf("%d", &n);

    printf("enter your array :");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("your array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    int pos;
    printf("enter the element position u want to delete : ");
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("your array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void showPrint(int arr[], int length)
{
    printf("your array : ");
    for (int i = 0; i < length; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void delEle(int arr[], int n)
{
    showPrint(arr, n);
    int pos;
    printf("\nenter your postion to delete element :");
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    showPrint(arr, n);
    // return n;
}

void insort(int arr[], int n){
    showPrint(arr, n);

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && temp < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;

    }

    showPrint(arr,n);
}

int main()
{
    int n;
    printf("enter you array size : ");
    scanf("%d", &n);

    int arr[n];
    printf("\nenter %d element in your array :", n);
    ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // delEle(arr, n);

    insort(arr,n);

    return 0;
}
