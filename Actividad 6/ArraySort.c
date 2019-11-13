#include<stdio.h>

void swap(int *p,int *q) {
   int t;
   
   t=*p; 
   *p=*q; 
   *q=t;
}

void bubbleSort(int a[], int n) { 
   int i,j;

   for(i = 0;i < n-1;i++){
      for(j = 0;j < n-i-1; j++) {
         if(a[j] > a[j+1])
            swap(&a[j], &a[j+1]);
      }
   }         
}



int main(){
    int size;
    scanf("%u", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%u", &arr[i]);
    }

    bubbleSort(arr, size);

    for (int i=0; i < size; i++){
        printf("%d ", arr[i]);
    } 
    printf("\n");
}