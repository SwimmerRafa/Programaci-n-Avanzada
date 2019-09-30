#include<stdio.h>

void season (int month, int day){
    if((month == 12 && day >= 16) || month == 1 || month == 2 || (month == 3 && day <= 15)){
        printf("Winter");
    }
    else if ((month == 3 && day >= 16)|| month == 4 || month == 5 || (month == 6 && day <= 15)){
        printf("Spring");
    }
    else if ((month == 6 && day >= 16) || month == 7 || month == 8 || (month == 9 &&  day <= 15)){
        printf("Summer");
    }
    else{
        printf("Fall");
    }
    
}

int main(){
    int m, d;
    scanf("%i", &m);
    scanf("%i", &d);
    season(m, d);
}