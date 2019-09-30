#include<stdio.h>

void hasMidPoint(int a, int b, int c){
   if(a == b && b == c){
       printf("true");
   }
   else if(((a + b) / 2.0 == c || (b + c) / 2.0 == a || (a + c) / 2.0 == b)){
       printf("true");
   }
   else{
       printf("false");
   }
}

int main(){
    int n1, n2, n3;
    scanf("%i\n", &n1);
    scanf("%i\n", &n2);
    scanf("%i", &n3);
    hasMidPoint(n1, n2, n3);
}