#include<iostream>


void print_arr(int *arr, int n){
    for(int i = 1; i<=n; i++){
        std::cout<<*(arr+i)<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    int n = 10;
    int arr[n] = {0, 70, 90, 80, 10, 60, 30, 50, 40, 20};
    std::cout<<"given array: ";
    print_arr(arr, n);
    for(int i = 0; i < n; i++){        
        for(int j = 0; j < n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    std::cout<<"sorted array: ";
    print_arr(arr, n);

    return 0;
}
