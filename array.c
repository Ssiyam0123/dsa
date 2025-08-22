// Online C compiler to run C program online
#include <stdio.h>

int main() {
    /*
    Second Largest Element

Find the second largest element in the array.

Frequency of Elements

Print how many times each element occurs in the array.
    **/
   
   //Count how many numbers in the array are even and how many are odd.
   
    void checkEvenOrOdd(){
        int n;
        printf("Enter the elements number of your array : ");
        scanf("%d", &n);
        
        int arr[n];
        int even, odd = 0;
        printf("enter %d elements in the array : ");
        for(int i = 0; i<n; i++){
            scanf("%d", &arr[i]);
            
            if(arr[i] % 2 == 0){
                even = even+1;
            }
            else{
                odd = odd+1;
            }
        }
        
        printf("even number = %d ",even);
        printf(" odd number = %d ", odd);
    }
    
    
    

    void nastedLoop(){
        int n;
        printf("enter the number of your pattern : ");
        scanf("%d", &n);
        
       for(int i = 1; i <=n; i++){
           for (int j = 1; j<=n; j++){
               printf("%d",j);
           }
           
           printf("\n");
       }
    }
    
    
    void nastedLoopSecond(){
        int n; 
        printf("enter the number of your pattern : ");
        scanf("%d", &n);
        
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                printf("%d",j);
            }
            printf("\n");
        }
    }
    
    void nastedLoopThird(){
        int n;
        printf("enter the number of ur pattern : ");
        scanf("%d",&n);
        
       for(int i = n; i>=1; i--){
           for(int j = i; j>=1; j--){
               printf("%d", j);
           }
           printf("\n");
       }
    }
    
    
    nastedLoopThird();
    // nastedLoop();
    // nastedLoopSecond();
    //checkEvenOrOdd();

    return 0;
}
