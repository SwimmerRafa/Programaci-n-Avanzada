#include<stdio.h>

int binarySearch(int arr[], int x,int n) 
    { 
        int l = 0 ; 
        int r = n - 1; 
        while (l <= r)  
        { 
            int m = l + (r - l) / 2; 
  
        int res; 
        if (x == (arr[m])) 
            res = 0; 
              
            if (res == 0) 
                return m; 
            if (x > (arr[m])) 
                l = m + 1; 
            else
                r = m - 1; 
        } 
  
        return -1; 
    } 