#include<stdio.h>

void insertSort(){
    int arr[] = {2,45,1,43,6,3,54,64,23};

    int length = sizeof(arr)/sizeof(arr[0]);


    for(int i = 1; i<length; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]> temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

     for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

}


int main(){
    insertSort();
    return 0;
}