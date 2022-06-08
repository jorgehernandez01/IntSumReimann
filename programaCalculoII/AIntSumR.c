#include <stdio.h>
#include <math.h>

float funcionR(float x){ //funcion racional
    float im;

    im = 1/x;

    return im; // devuelve la imagen de la funcion
}

float sumaReimann(){
     float a, b, n, x, f, Dltx, phi, sum;

     sum = 0;

     printf("Digite el limite inferior:");
     scanf("%f",&a);
     printf("Digite el limite superior:");
     scanf("%f",&b);
     printf("Digite el numero de subintervalos:");
     scanf("%f",&n);

     Dltx = (b-a)/n; //calculamos delta x

     for(int i = 1; i <= n; i++){ //sumatoria
        x = a + Dltx * i; //calculo de x
        f = fabs(funcionR(x)); //el valor de x se le manda a nuestra funcion
        phi = f * Dltx; //multiplicacion del valor arrojado por la funcion por Dltx por def. de sumas de reimann
        sum += phi; //acumulamos los resultados previos
     }

     return sum;
}

int main(){
    float resultado = sumaReimann();

    printf("El resultado aproximado es:%f",resultado); //impresion del resultado
}
