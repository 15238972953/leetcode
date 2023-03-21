#include <stdio.h>
#include<stdlib.h>

double* convertTemperature(double celsius){
    double *p=(double*)malloc(sizeof(double)*2);
    p[0]=celsius+273.15;
    p[1]=celsius*1.80+32.00;
    return p;
}

int main()
{
    double celsius = 36.50;
    double *p;
    p=convertTemperature(celsius);
    printf("%f ,%f\n",p[0],p[1]);
    return (0);
}