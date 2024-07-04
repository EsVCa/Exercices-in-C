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
//Descripción del programa: Este programa imprime una forma de letra 'Z' utilizando la letra 'Z' en líneas horizontales, donde cada fila tiene un número
// decreciente de 'Z's. La cantidad de filas y el espacio entre las columnas se especifican en la función main().

#include <stdio.h>

// Función para imprimir un número específico de espacios.
void Spaces(int);

// Función para imprimir una serie de letras 'Z'.
void LetterZ(int);

// Función para imprimir la forma de letra 'Z' utilizando la letra 'Z' en líneas horizontales.
void FormLetter(int, int, int);

int main() {
    // Llama a la función FormLetter() para imprimir la forma de letra 'Z' con 1 fila inicial, 7 espacios iniciales y el contador inicializado en 1.
    FormLetter(1, 7, 1);
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
    } else {
        printf("\n"); // Cuando se completa una fila de 'Z's, imprime un salto de línea.
    }
}

// Función recursiva para imprimir la forma de letra 'Z'.
void FormLetter(int amount, int space, int counter) {
    if(counter <= 8) {
        if(counter <= 3) {
            Spaces(space); // Llama a Spaces() para imprimir espacios iniciales.
            LetterZ(amount); // Llama a LetterZ() para imprimir 'Z's en la parte ascendente de la forma de letra 'Z'.
            FormLetter(amount + 2, space - 1, counter + 1); // Llama recursivamente a FormLetter() con más 'Z's y menos espacio entre columnas.
        } else {
            Spaces(space); // Llama a Spaces() para imprimir espacios iniciales.
            LetterZ(amount); // Llama a LetterZ() para imprimir 'Z's en la parte descendente de la forma de letra 'Z'.
            FormLetter(amount - 2, space + 1, counter + 1); // Llama recursivamente a FormLetter() con menos 'Z's y más espacio entre columnas.
        }
    }
}
