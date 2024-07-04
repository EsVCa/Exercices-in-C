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
//Descripción del programa: Este programa imprime una forma de letra 'P' usando la letra 'P' en líneas horizontales y verticales, donde cada fila tiene un número 
//decreciente de 'P's. La cantidad total de filas y el espacio entre las columnas se pueden ajustar modificando los parámetros en la llamada a la función FormLetter() 
//en la función main().

#include <stdio.h>

// Función para imprimir un número específico de espacios.
void Spaces(int);

// Función para imprimir una serie de letras 'P' seguidas de un espacio.
void LetterP(int);

// Función para imprimir la forma de letra 'P' usando la letra 'P' en líneas horizontales y verticales.
void FormLetter(int, int);

int main() {
    // Llama a la función FormLetter() para imprimir la forma de letra 'P' con 7 filas y sin espacio inicial.
    FormLetter(7, 0);
    return 0;
}

// Función recursiva para imprimir espacios.
void Spaces(int amount) {
    if(amount > 0) {
        printf(" "); // Imprime un espacio.
        Spaces(amount - 1); // Llama recursivamente a Spaces() con una cantidad decreciente de espacios.
    }
}

// Función recursiva para imprimir 'P's con un espacio después de cada 'P'.
void LetterP(int amount) {
    if(amount > 0) {
        printf("P"); // Imprime un 'P'.
        Spaces(1); // Llama a Spaces() para imprimir un espacio.
        LetterP(amount - 1); // Llama recursivamente a LetterP() con una cantidad decreciente de 'P's.
    } else {
        printf("\n"); // Cuando se completa una fila de 'P's, imprime un salto de línea.
    }
}

// Función recursiva para imprimir la forma de letra 'P'.
void FormLetter(int amount, int space) {
    if(amount > 0) {
        Spaces(space); // Llama a Spaces() para imprimir espacios iniciales.
        LetterP(amount); // Llama a LetterP() para imprimir la cantidad apropiada de 'P's en cada fila.
        FormLetter(amount - 1, space + 1); // Llama recursivamente a FormLetter() con una cantidad decreciente de filas y un aumento en el espacio inicial.
    }
}
