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
//Descripcion del programa:   Genera una figura con la letra A

#include <stdio.h>

// Función para imprimir un número específico de espacios.
void Spaces(int amount) {
    if(amount > 0) {
        printf(" ");
        Spaces(amount - 1);
    }
}

// Función para imprimir la letra 'A' con un número dado de repeticiones.
void LetterA(int amount) {
    if(amount > 0) {
        printf("A");
        LetterA(amount - 1);
    } else {
        printf("\n");
    }
}

// Función para formar la figura utilizando la letra 'A'.
void FormLetter(int amount) {
    if(amount > 55) {
        Spaces(amount); // Llama a la función Spaces() para imprimir espacios iniciales.
        LetterA(80 - amount); // Llama a la función LetterA() para imprimir la letra 'A'.
        FormLetter(amount - 1); // Llama recursivamente a FormLetter() con un decremento en el número de columnas.
    }
}

int main() {
    FormLetter(79); // Llama a la función FormLetter() con un ancho inicial de 79 columnas.
    return 0;
}
