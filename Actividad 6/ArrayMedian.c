#include <stdio.h>

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

void computeMedina(int a[], int n) {
    bubbleSort(a, n);

    double median = 0.0; 

    if(n % 2 == 0) { 
        int i = n / 2;   
        int a1 = a[i - 1];
        int a2 = a[i];

        median = (double) (a1 + a2) / 2;
        printf("%.1f\n", median);
    } else {
        median = (a[n - 1 / 2]);

        printf("%i\n",(int) median);

    }

}

int main() {
    int size;
    scanf("%i", &size);
    int arr[size];

    int i = 0;
    for(i; i < size; i++) {
        scanf("%i", &arr[i]);
    }
    computeMedina(arr, size);
}