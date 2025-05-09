#include <stdio.h>
#include <stdlib.h>
int multiplicacion(int a, int b){
    return a * b;
}

int division(int a, int b){
    if(b != 0)
        return a / b;
    else
        return 0;
}
#include <math.h>
int main(){
int num1 = 12;
int num2 = 3;
int op1 = suma(num1,num2);
printf("%i",op1);
int op2 = resta(num1,num2);
13
printf("%i",op2);
int op3 = multi(num1,num2);
printf("%i",op3);
return 0;
}