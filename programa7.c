#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    system("cls");
    printf("ingrese el primer numero");
    if(scanf("%lf", &num1)!=1){
        printf("Error: Ingrese un numero real valido.\n");
        return 1;
    }
    printf("ingrese el segundo numero");
    if(scanf("%lf", &num2)!=1){
        printf("Error: Ingrese un numero real valido.\n");
        return 1;
    }
    double suma = num1 + num2;
    double resta = num1  - num2;
    double multiplicacion = num1 * num2;

    if(num2 == 0){
        printf("Error: No se puede dividir entre cero.\n");
        return 1;
    }
    double division = num1 / num2;
    printf("\n Resultados:\n");
    printf("Suma: %.4lf\n", suma);
    printf("Resta: %.4lf\n", resta);
    printf("Multiplicaci%cn %.4lf\n",162, multiplicacion);
    printf("Divisi%cn: %.4lf\n",162, division);

    return 0;
}