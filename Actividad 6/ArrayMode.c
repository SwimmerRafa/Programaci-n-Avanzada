#include<stdio.h>
#include<stdlib.h>

int computeMode(int a[], unsigned int n){
    int a[n];
    

}

int main() {
    unsigned int size;
    scanf("%u", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%u", &arr[i]);
    }

    printf("%i\n", computeMode(arr, size));
}