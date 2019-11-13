#include<stdio.h>

int computeMin(int a[], int n){

    int min = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    return  min;
}

int main(){
    int size;
    scanf("%u", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%u", &arr[i]);
    }

    printf("%d\n", computeMax(arr, size));
}