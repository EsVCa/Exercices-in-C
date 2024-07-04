//Fecha: 11/03/2024
//Hora: 8:46 PM
//Versión del código: 1.0
//Autor: Esteban Vásquez Castañeda. Ing. C
//Lenguaje: C
//Versión del lenguaje: C18
//Versión del compilador: 13.2.0
//Nombre del S.O.: Windows 11
//Versión del S.O.: 10.0.22621
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica De Pereira
//Programa de Ingeniería de Sistemas y Computación
//Asignatura: IS284 Programación II
//Descripción del programa: Este programa calcula y muestra los términos de la serie de Taylor para ln(x) hasta un número dado de términos.
// El usuario puede ingresar el número de términos y el valor de x.

#include <stdio.h>
#include <math.h>

// Función para calcular un término de la serie de Taylor para ln(x).
float TermTaylor(int i, float x) {
    return (pow(-1, (i - 1)) * pow(x, i) / i);
}

// Función recursiva para calcular la suma de los términos de la serie de Taylor para ln(x).
float SummationTaylor(int n, int i, float x) {
    if(i > n) {
        return 0;
    } else {
        return TermTaylor(i, x) + SummationTaylor(n, i + 1, x);
    }
}

// Función recursiva para imprimir los términos de la serie de Taylor y su suma.
void PrintTaylor(int term, int quantity, float x) {
    if(term < quantity) {
        printf("(%.8f) + ", TermTaylor(term, x - 1));
        PrintTaylor(term + 1, quantity, x);
    } else {
        printf("(%.8f) = ", TermTaylor(term, x - 1));
        printf("(%.8f)", SummationTaylor(quantity, 1, x - 1));
    }
}

int main() {
    int quantityTerms = 0;
    float x = 0;
    
    printf("Ingrese el numero de terminos que desea conocer de la serie de Taylor de ln(x): ");
    scanf("%i", &quantityTerms);
    
    printf("Ingrese el valor de la x que desea tomar: ");
    scanf("%f", &x);
    
    PrintTaylor(1, quantityTerms+1, x);
    
    return 0;
}
