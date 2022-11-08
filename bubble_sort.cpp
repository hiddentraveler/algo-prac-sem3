#include <iostream>

void swap(int* a, int* b){
    //array position swap code
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << *a<<"," << *b << std::endl;
}

void bsort(int arr[], int n){
    //code for bubble sort
    int i,j;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }


}


void printarr(int arr[],int n){    
    //sorted array print
    std::cout << "Sorted array is: [";
    for(int i=0;i<n-1;i++){
    std::cout <<arr[i] << ",";
    }
    std::cout<<arr[n-1] << "]"<<std::endl;

}

int main(){
    int n;
    //array size input
    std::cout << "size of the array:";
    std::cin >> n;
    int arr[n];
    // array numbers input
    for (int i=0;i<n;i++){
    std::cout << "numbers for the array:";
    std::cin >> arr[i];
    }
    bsort(arr,n);
    printarr(arr, n);
    return 0;
}
