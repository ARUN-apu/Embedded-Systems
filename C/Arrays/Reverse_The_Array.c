#include <stdio.h>

void Reverse_Array(int arr[], int start, int end){
    if(start >= end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    Reverse_Array(arr, start+1, end-1);
}

int main(){
    int arr[] = {34,56,54,32,67,89,90,32,21};
    int length = sizeof(arr)/ sizeof(arr[0]);

    Reverse_Array(arr, 0, length-1);
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}