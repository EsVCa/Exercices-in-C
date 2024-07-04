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
//Descripcion del programa:  Este programa Calcula la Serie de Motzkin con de la cantidad de terminos dada por el usuario
//Salvedad: Solo toma valores positivos
#include <stdio.h>

//Hace las operaciones de la serie
int motzkin(int n) {
    // Casos base
    if (n == 0 || n == 1) 
        return 1;
    if (n == 2) 
        return 2;

    // Llamadas recursivas y sumas parciales
    return ((2 * n + 1) * motzkin(n - 1) + (3 * n - 3) * motzkin(n - 2)) / (n + 2);
}

//Imprime los terminos
void print_motzkin_series_helper(int n, int i) {
    if (i > n) return;
    printf("%d ", motzkin(i)); // Imprime el término actual
    print_motzkin_series_helper(n, i + 1); // Llama recursivamente para el siguiente término
}

//Funcion Principal
int main() {
    int n=0;//Cantidad de terminos
    printf("Ingrese el valor de n para calcular la serie de Motzkin: ");
    scanf("%d", &n);

    print_motzkin_series_helper(n, 0);

    return 0;
}
