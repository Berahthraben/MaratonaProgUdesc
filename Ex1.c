#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    double pi = 3.14159;
    double raio;
    scanf("%lf", &raio);
    getchar();
    double Area = pi * pow(raio, 2);
    printf("A=%.4lf", Area);
    return 0;
}
