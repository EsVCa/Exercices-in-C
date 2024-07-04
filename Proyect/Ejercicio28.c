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
//Descripción del programa: Este programa imprime una forma de letra 'A' utilizando la letra 'A' en líneas horizontales, donde cada fila tiene un número decreciente 
//de 'A's. El espacio entre las columnas se ajusta en cada iteración de la función recursiva.

#include <stdio.h>

// Función para imprimir un número específico de espacios.
void Spaces(int);

// Función para imprimir una serie de letras 'A'.
void LetterA(int);

// Función para imprimir la forma de letra 'A' utilizando la letra 'A' en líneas horizontales.
void FormLetter(int, int, int);

int main() {
    // Llama a la función FormLetter() para imprimir la forma de letra 'A' con 1 fila inicial, 39 espacios iniciales y el contador inicializado en 0.
    FormLetter(1, 39, 0);
    return 0;
}

// Función recursiva para imprimir espacios.
void Spaces(int amount) {
    if(amount > 0) {
        printf(" "); // Imprime un espacio.
        Spaces(amount - 1); // Llama recursivamente a Spaces() con una cantidad decreciente de espacios.
    }
}

// Función recursiva para imprimir 'A's.
void LetterA(int amount) {
    if(amount > 0) {
        printf("A"); // Imprime una 'A'.
        LetterA(amount - 1); // Llama recursivamente a LetterA() con una cantidad decreciente de 'A's.
    } else {
        printf("\n"); // Cuando se completa una fila de 'A's, imprime un salto de línea.
    }
}

// Función recursiva para imprimir la forma de letra 'A'.
void FormLetter(int amount, int space, int counter) {
    if(counter <= 10) {
        if(counter <= 4) {
            Spaces(space); // Llama a Spaces() para imprimir espacios iniciales.
            LetterA(amount); // Llama a LetterA() para imprimir 'A's en la parte ascendente de la forma de letra 'A'.
            FormLetter(amount + 1, space - 1, counter + 1); // Llama recursivamente a FormLetter() con más 'A's y menos espacio entre columnas.
        } else {
            Spaces(space); // Llama a Spaces() para imprimir espacios iniciales.
            LetterA(amount); // Llama a LetterA() para imprimir 'A's en la parte descendente de la forma de letra 'A'.
            FormLetter(amount - 1, space + 1, counter + 1); // Llama recursivamente a FormLetter() con menos 'A's y más espacio entre columnas.
        }
    }
}
