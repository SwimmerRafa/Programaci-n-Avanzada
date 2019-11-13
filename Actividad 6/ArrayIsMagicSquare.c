#include<stdio.h>
#include<stdbool.h>

bool isMagicSquare(int arr [][], int size){
    bool result = true;

    for(int i = 0; i < size; i++){
        if(arr[i] != size){
            result = false;
        }
    }

    if(result){
        int sum = 0;

        for(int j = 0; j < size; j++){
            sum += arr[0][j];
        }

        for(int )

    }
}

