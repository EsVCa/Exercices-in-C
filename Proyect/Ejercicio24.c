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
//Descripción del programa: Este programa imprime una forma de letra 'A' usando la letra 'A' en líneas horizontales y verticales, donde cada fila tiene un número 
//decreciente de 'A's. La forma de la letra 'A' se ajusta a la cantidad de líneas y al espacio entre las columnas, que se especifican en la función main().

#include <stdio.h>
    
// Función para imprimir un número específico de espacios.
void Spaces(int);

// Función para imprimir una serie de letras 'A'.
void LetterA(int);

// Función para imprimir la forma de letra 'A' usando la letra 'A' en líneas horizontales y verticales.
void FormLetter(int, int, int);

int main() {
    // Llama a la función FormLetter() para imprimir la forma de letra 'A' con 1 fila inicial, 5 espacios iniciales y el contador inicializado en 1.
    FormLetter(1, 5, 1);
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
    }
}

//Funcion aux de FormLetter
void AuxFormLetter(int amount, int space){
    Spaces(27); // Imprime espacios para ajustar la posición de la letra 'A'.
    LetterA(amount); // Llama a LetterA() para imprimir 'A's en la primera parte de la forma de letra 'A'.
    Spaces(space); // Imprime espacios entre las columnas.
    LetterA(amount); // Llama a LetterA() para imprimir 'A's en la segunda parte de la forma de letra 'A'.
    printf("\n"); // Imprime un salto de línea.
}
// Función recursiva para imprimir la forma de letra 'A'.
void FormLetter(int amount, int space, int counter) {
    if(counter < 8) {
        if(counter < 4) {
            AuxFormLetter(amount, space);
            FormLetter(amount + 1, space - 2, counter + 1); // Llama recursivamente a FormLetter() con más 'A's y menos espacio entre columnas.
        } else if(counter == 4) {
            Spaces(27); // Imprime espacios para ajustar la posición de la letra 'A'.
            LetterA(amount - 1); // Llama a LetterA() para imprimir 'A's en la primera parte de la forma de letra 'A'.
            Spaces(space); // Imprime espacios entre las columnas.
            LetterA(amount); // Llama a LetterA() para imprimir 'A's en la segunda parte de la forma de letra 'A'.
            printf("\n"); // Imprime un salto de línea.
            FormLetter(amount - 1, space + 2, counter + 1); // Llama recursivamente a FormLetter() con menos 'A's y más espacio entre columnas.
        } else {
            AuxFormLetter(amount, space);
            FormLetter(amount - 1, space + 2, counter + 1); // Llama recursivamente a FormLetter() con menos 'A's y más espacio entre columnas.
        }
    }
}
