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
//Descripción del programa: Este programa calcula y muestra los términos de la serie de Taylor para senh(x) hasta un número dado de términos. 
//El usuario puede ingresar el número de términos y el valor de x.

#include <stdio.h>
#include <math.h>

// Función recursiva para calcular el factorial de un número.
long long int DoFactorial(int number) {
    if(number == 0)
        return 1;
    else 
        return number * DoFactorial(number - 1);
}

// Función para calcular un término de la serie de Taylor para senh(x).
float TermTaylor(int i, int x) {
    return pow(x, (2 * i) + 1) / DoFactorial((2 * i) + 1);
}

// Función recursiva para calcular la suma de los términos de la serie de Taylor para senh(x).
float SummationTaylor(int n, int i, int x) {
    if(i > n) {
        return 0;
    } else {
        return TermTaylor(i, x) + SummationTaylor(n, i + 1, x);
    }
}

// Función recursiva para imprimir los términos de la serie de Taylor y su suma.
void PrintTaylor(int term, int quantity, int x) {
    if(term < quantity) {
        printf("%.8f + ", TermTaylor(term, x));
        PrintTaylor(term + 1, quantity, x);
    } else {
        printf("%.8f = ", TermTaylor(term, x));
        printf("%.8f", SummationTaylor(quantity, 0, x));
    }
}

int main() {
    int quantityTerms = 0;
    int x = 0;
    
    printf("Ingrese el numero de terminos que desea conocer de la serie de Taylor del senh(x): ");
    scanf("%i", &quantityTerms);
    
    printf("Ingrese el valor de la x que desea tomar: ");
    scanf("%i", &x);
    
    PrintTaylor(0, quantityTerms, x);
    
    return 0;
}
