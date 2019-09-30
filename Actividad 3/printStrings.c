#include<stdio.h>

void printStrings(char string[100], int num){
    for(int i = 0; i < num; i++){
        printf("%s", string);
    }
}

int main(){
    int n;
    scanf("%i\n", &n);
    
    char s[100];
    scanf("%[^\n]", &s);

    printStrings(s, n);
}