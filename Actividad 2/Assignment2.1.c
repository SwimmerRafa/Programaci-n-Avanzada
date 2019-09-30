#include <stdio.h>

int main(){
    int w,h,x,y;

   printf("Give me the number of rows:\n");
    scanf("%i", &w);
    
    printf("Give me the number of colums:\n");
    scanf("%i", &h);

    x = w * h;
    y = 0;
     while(y < x) {
         for(int i = 1; i <= w; i ++) {
             printf("*");
         }
         y = y + w;
         printf("\n");
     }

     return 0;
}   