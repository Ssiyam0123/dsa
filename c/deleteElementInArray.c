#include <stdio.h>

void deleteElement()
{
    int n;
    printf("enter the size of your array : ");
    scanf("%d", &n);

    printf("enter %d element in your array : ", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("before deletation array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    int pos;
    printf("\nenter the postion (1-%d) you want to delete : ", n);
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;

    printf("after deletation array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main()
{
    deleteElement();
    return 0;
}
