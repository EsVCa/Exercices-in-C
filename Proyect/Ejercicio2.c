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
//Descripcion del programa: Este programa Calcula la serie de fibonacci menores a 100 y hace la suma de estos.
#include <stdio.h>
void Fibonacci (int, int, int);
int main(){
    printf ("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100. Los números a sumar son:\n");
    Fibonacci (1, 1, 0);

    return 0;
}
//Calcula serie
void Fibonacci (int n, int counter, int add){
    if (counter<100){
        printf ("%i, ", n);
        Fibonacci(counter, n+counter, n+add);
    }
    else
        printf ("%i. y la su suma es de %i", n, add+n);
}
