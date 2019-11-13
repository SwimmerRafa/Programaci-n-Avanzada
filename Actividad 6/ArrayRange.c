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
    int result;
    int n;
    scanf("%i", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%u", &a[i]);
    }

    result = computeMax(a, n) - computeMin(a, n) + 1;

    printf("%i", result);

}