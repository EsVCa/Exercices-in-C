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
//Descripcion del programa: Este programa Calcula la serie de fibonacci menores a 10000
#include <stdio.h>
void Fibonacci (int , int);
int main(){
    printf ("Este programa presenta la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va\n");
    printf("sumando progresivamente los dos últimos elementos de la serie, así: 0 1 1 2 3 5 8 13 21 34.......\n");
    printf("Para este programa, se presentará la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.\n");
    Fibonacci(1, 1);
    return 0;
}
//Calcula serie
void Fibonacci (int n, int counter){
    if (counter<10000){
        printf ("%i, ", n);
        Fibonacci(counter, n+counter);
    }
    else
        printf ("%i.", n);
}
