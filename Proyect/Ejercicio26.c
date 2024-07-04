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
//Descripción del programa: Este programa imprime una forma de letra 'Z' utilizando la letra 'Z' en líneas horizontales, donde cada fila tiene un número decreciente 
//de 'Z's. El espacio entre las columnas se ajusta en cada iteración de la función recursiva.

#include <stdio.h>

// Función para imprimir un número específico de espacios.
void Spaces(int);

// Función para imprimir una serie de letras 'Z'.
void LetterZ(int);

// Función para imprimir la forma de letra 'Z' utilizando la letra 'Z' en líneas horizontales.
void FormLetter(int, int);

int main() {
    // Llama a la función FormLetter() para imprimir la forma de letra 'Z' con 17 espacios iniciales y el contador inicializado en 0.
    FormLetter(17, 0);
    return 0;
}

// Función recursiva para imprimir espacios.
void Spaces(int amount) {
    if(amount > 0) {
        printf(" "); // Imprime un espacio.
        Spaces(amount - 1); // Llama recursivamente a Spaces() con una cantidad decreciente de espacios.
    }
}

// Función recursiva para imprimir 'Z's.
void LetterZ(int amount) {
    if(amount > 0) {
        printf("Z"); // Imprime una 'Z'.
        LetterZ(amount - 1); // Llama recursivamente a LetterZ() con una cantidad decreciente de 'Z's.
    }
}

// Función recursiva para imprimir la forma de letra 'Z'.
void FormLetter(int space, int counter) {
    if(counter < 9) {
        Spaces(counter); // Llama a Spaces() para imprimir espacios iniciales.
        LetterZ(1); // Llama a LetterZ() para imprimir una 'Z' en la parte superior de la forma de letra 'Z'.
        Spaces(space); // Imprime espacios entre las columnas.
        LetterZ(1); // Llama a LetterZ() para imprimir una 'Z' en la parte inferior de la forma de letra 'Z'.
        printf("\n"); // Imprime un salto de línea.
        FormLetter(space - 2, counter + 1); // Llama recursivamente a FormLetter() con menos espacio entre columnas y un contador incrementado.
    } else {
        Spaces(counter); // Llama a Spaces() para imprimir espacios iniciales.
        LetterZ(1); // Llama a LetterZ() para imprimir una 'Z' en la parte final de la forma de letra 'Z'.
        printf("\n"); // Imprime un salto de línea.
    }
}
