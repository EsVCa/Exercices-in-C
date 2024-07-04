//Fecha: 11/03/2024
//Hora:  8:46 Pm
//Version del codigo: 1.0
//Autor: Esteban Vasquez Castaeñda.Ing c
//Lenguaje C
//Version del lenguaje: C18
//Version del compilador: 13.2.0
//Nombre del SO: Windows 11
//Version del S.O.: 10.0.22621
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnologica De Pereira
//Porgrama de Ingenieria de Sistemas y Computacion
//Asignatura IS284 Programación II
//Descripcion del programa:  Este programa Calcula la serie de Triangular con de la cantidad de terminos dada por el usuario
//Salvedad: Solo toma valores positivos
#include <stdio.h>

//Calcula terminos
int TriangularSeries (int number){
	if (number==0)
		return 0;
	else 
		return number+TriangularSeries(number-1);
}

//Imprime termino a termino
void imprimir_serie(int n, int termino_actual) {
    if (n <= 0) {
        return;
    } else {
        printf("%d", TriangularSeries(termino_actual));
        if (n > 1) {
            printf(", ");
        }
        imprimir_serie(n - 1, termino_actual + 1);
    }
}

//Funcion principal
int main() {
    int n=0;//Cantidad de terminos 
    
    printf("Ingrese el número de términos deseados en la serie triangular: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("El número de términos debe ser al menos 1.\n");
        return 1;
    }

    printf("Los primeros %d términos de la serie triangular son:\n", n);
    imprimir_serie(n, 1);
    printf("\n");

    return 0;
}

