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
//Descripcion del programa:  Este programa recibe 75 numeros dados por el usuario y dice cuantos numeros positivos hay, cuantos negativos
//Cual es el numero mayor, cual es el numero menor y cual es el promedio de los numeros positivos 

#include <stdio.h>

// Función para calcular la cantidad de números mayores a 150.
int CalculateMajorTerm(int num) {
    if (num > 150)
        return 1;
    else 
        return 0;
}

// Función para calcular la cantidad de números negativos.
int CalculateNumNegative(int num) {
    if (num < 0)
        return 1;
    else 
        return 0;
} 

// Función para encontrar el número mayor.
int NumMajor(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

// Función para encontrar el número menor.
int NumMin(int num1, int num2) {
    if (num1 < num2)
        return num1;
    else
        return num2;
}

// Función para determinar si un número es positivo.
int NumPositive(int num) {
    if (num > 0)
        return 1;
    else 
        return 0;
}

// Función para sumar los términos positivos.
float SummationTerms(int num) {
    if (num > 0)
        return num;
    else
        return 0;
}

// Función para solicitar los términos y realizar los cálculos.
void AskForTerms(int term, int amountMayor150, int amountNegative, int numMayor, int numMinium, float summationPositive, int numPositive) {
    int num = 0;
    if (term <= 5) {
        printf("Escriba el término %i: ", term);
        scanf("%i", &num);
        if (num == 0) { // Confirma que el término sea diferente de cero (0).
            printf("El número debe ser diferente de cero (0). Intente de nuevo.\n");
            AskForTerms(term, amountMayor150, amountNegative, numMayor, numMinium, summationPositive, numPositive);
        } else 
            AskForTerms(term + 1, amountMayor150 + CalculateMajorTerm(num), amountNegative + CalculateNumNegative(num), NumMajor(numMayor, num), NumMin(numMinium, num), summationPositive + SummationTerms(num), numPositive + NumPositive(num));
    } else {
        printf("Hay %i números mayores a 150.\n", amountMayor150);
        printf("Hay %i números negativos.\n", amountNegative);
        printf("El número mayor de los términos es %i y el más pequeño es %i.\n", numMayor, numMinium);
        if (numPositive != 0) // Verifica si hay números positivos para evitar división por cero.
            printf("El promedio de los números positivos es %.2f.\n", summationPositive / numPositive);
        else
            printf("No hay números positivos para calcular el promedio.\n");
    }
}

// Función principal
int main() {
    printf("Este programa recibe 75 términos y muestra algunas conclusiones sobre ellos:\n");
    AskForTerms(1, 0, 0, 0, 0, 0, 0);
    return 0;
}
