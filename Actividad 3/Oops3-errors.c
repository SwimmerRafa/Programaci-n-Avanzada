#include "stdio.h"

void printer(double x, double y) {   
    printf("x = %.2f and y = %.1f \n",x, y);
}

int main() {
    double bubble = 867.5309;
    double x = 10.01;
    double y = 8.0;
    int z = 5;
    printer(x, y);
    printf("x = %.2f and y = %.4f \n",x, bubble);
    printf("The value from main is: %.4f \n", bubble);
    printf("z = %i", z);
}