#include<stdio.h>

int countInRange(int min, int max, int a[], int size){
    int count = 0;

    for(int i = 0; i < size; i++){
        if(a[i] >= min && a[i] <= max){
            count++;
        }
    }
    return count;
}


int main(){
    int min;
    scanf("%i", &min);

    int max;
    scanf("%i", &max);

    int size;
    scanf("%i", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", countInRange(min, max, arr, size));
}