#include<stdio.h>

void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        printf(" %d ",arr[i]);
    }
}



int partition (int arr[], int low, int high){
    int pivok = arr[low];
    int i = low;
    int j = high;

    while(pivok >= arr[i]){
        i++;
    }

    while(pivok < arr[j]){ 
        j++;
    }

}

void quiciSort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);

        quiciSort(arr, low, pi-1);
        quiciSort(arr, pi+1, high);
    }
}


int main(){
    int n;
    printf("enter your array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("\n enter your %d element in your array : ", n);
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int pi = partition(arr, 0, n-1);

    printf("\nindex of pvok : %d", pi);

    quiciSort(arr, 0 , n-1);

    printf("\nyour sorted array : ");
    printArray(arr,n);


    return 0;
}