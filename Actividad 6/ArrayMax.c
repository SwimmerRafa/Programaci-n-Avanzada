#include<stdio.h>

int computeMax(int a[], int n){

    int max = 0;

    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    return  max;
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