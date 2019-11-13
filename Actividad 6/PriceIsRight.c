#include<stdio.h>

int priceIsRight (int bids[], int price, int size){
    int oferta = -1;
    for(int i = 0; i < size; i++){
        if(price - bids[i] >= 0 &&  bids[i] > oferta){
            oferta = bids[i];
        } 
    }

    return oferta;
}



int main(){
    int price;
    scanf("%i", &price);

    int size;
    scanf("%u", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%u", &arr[i]);
    }

    printf("%d", priceIsRight(arr, price, size));
}