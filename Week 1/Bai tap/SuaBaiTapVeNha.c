#include <stdio.h>
#include <math.h>

void main(){
    printf("Input your Number to change to Sin - Cos - Tan - Cot: ");
    int number;
    double reSin;
    double reCos;
    double reTan;
    double reCot;
    scanf("%d", &number);
    reSin = sin(number);
    printf("Sin(%d) is: %0.3lf\n",number,reSin);
    reCos = cos(number);
    printf("Cos(%d) is: %0.2lf\n",number,reCos);
}
