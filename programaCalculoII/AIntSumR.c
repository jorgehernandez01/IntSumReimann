#include <stdio.h>
#include <math.h>

float funcionR(float x){
    float im;

    im = 1/x;

    return im;
}

float sumaReimann(){
    int i, n;
    float x, f, b, a, acum, Dltx;

    i = 1;
    acum = 0;

    printf("Digite el intervalo 'a':");
    scanf("%f",&a);
    printf("Digite el intervalo 'b':");
    scanf("%f",&b);
    printf("Digite el numero de subintervalos:");
    scanf("%d",&n);

    Dltx = (b - a) / n; //calculo de 'Delta x'

    while(i <= n){
        x = (Dltx*i*a);
        f = funcionR(x);

        acum = acum + (f);

        i++;
    }

    acum = acum * Dltx;

    return acum;
}

int main(){
    float resultado = sumaReimann();

    printf("El resultado aproximado es:%0.2f",resultado); //el resultado no es el esperado :(
}
