#include <stdio.h>

void insertElement()
{
    int n;
    printf("enter your array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d elements in your array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos, element;
    printf("enter element that you want to add : ");
    scanf("%d", &element);

    printf("enter the position : ");
    scanf("%d", &pos);

    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element;
    n = n + 1;

    printf("after adding element in the array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}
int main()
{
    insertElement();
    return 0;
}