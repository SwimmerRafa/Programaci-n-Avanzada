#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "FunctionsExam1.h"


unsigned int paresBits(short parameters, ...){
    va_list argp;
    unsigned int final = 0;
    unsigned int current;
    unsigned int mask;
    
    if(parameters > 16){
        parameters = 16;
    }

    va_start(argp, parameters);
    for(int i = 0; i < parameters; i++){
        mask = (3 * pow(4, (i % 8)));
        if (i > 7){
            current = va_arg(argp, int) & mask;
            final |= (current << 16);
        }
        else{
            current = va_arg(argp, int) & mask;
            final |= (current);
        }
    }
    va_end(argp);
    return final;
}

int pruebaCero(){
    if(paresBits(0) == 0){
        return 1;
    } 
    else{
        return 0;
    }
}

int pruebaTres(){
    if(paresBits(3, 65535, 65535, 65535) == 63){
        return 1;
    }
    else{
        return 0;
    }
}

int pruebaAll(){
    if(paresBits    (18, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 
        65535, 65535, 65535, 65535, 65535, 0, 0) == 4294967295){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    printf("%d\n", pruebaCero());
    printf("%d\n", pruebaTres());
    printf("%d", pruebaAll());
}

/*
Resources:
    *How do varargs work in C?. (2019). Retrieved 16 September 2019, from https://jameshfisher.com/2016/11/23/c-varargs/
    *C - Bit wise Operators - fresh2refresh.com. (2019). Retrieved 16 September 2019, 
         from https://fresh2refresh.com/c-programming/c-operators-expressions/c-bit-wise-operators/
*/
