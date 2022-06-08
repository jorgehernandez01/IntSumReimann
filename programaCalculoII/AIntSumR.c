#include <stdio.h>
#include <math.h>

float funcionLineal(){
    float a, c, imagen;

    printf("Digite un valor para el coeficiente de x:");
    scanf("%f",&a);
    printf("Digite un valor para la constante:");
    scanf("%f",&c);

    imagen = a + c;

    return imagen;
}

float funcionCuadratica(){
    float a, b, c, imagen;

    printf("Digite un valor para el coeficiente de x^2:");
    scanf("%f",&a);
    printf("Digite un valor para el coeficiente de x:");
    scanf("%f",&b);
    printf("Digite un valor para la constante:");
    scanf("%f",&c);

    imagen = pow(2,a) + b + c;

    return imagen;
}

int main(){
    short opcion;
    float im;

    printf("1.- funcion lineal (ax + c). \n 2.- funcion cuadratica (ax^2 + bx + c).\n");
    printf("Elija la funcion que desee calcular:");
    scanf("%d",&opcion);

    switch(opcion){
    case 1:
        im = funcionLineal();
        printf("funcion lineal:%0.2f",im);
        break;
    case 2:
        im = funcionLineal();
        printf("funcion cuadratica:%0.2f",im);
        break;
    }
}
