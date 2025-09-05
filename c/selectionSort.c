#include <stdio.h>

void selectionSort()
{
    int n;
    printf("enter your array size :");
    scanf("%d", &n);

    printf("enter %d element in your array :", n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n your array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

   
    for(int i = 0; i<n; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(arr[min]> arr[j]){
                min = j;
            }
        }
    
        if(min != i){
            int temp = arr[min];
            int temp2 = arr[i];
            arr[min]=temp2;
            arr[i] = temp;
        }
    }

    printf("\n your array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main()
{
    selectionSort();
    return 0;
}