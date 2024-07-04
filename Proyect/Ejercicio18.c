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
//Descripcion del programa:   Este programa Algunas Ternas de numeros enteros siguiendo un patron
#include <stdio.h>
void NumericalPairs(int, int, int, int);

int main(){
    NumericalPairs(1, 1, 1, 1);
}

//Calcula las ternas
void NumericalPairs(int num1, int num2, int num3, int counter){
    if(num1<10){
        if(counter%3==0){
            if(num3<3){
            printf("%i %i %i\n", num1, num2, num3);
            NumericalPairs(num1+1, num2+1, num3+1, counter+1);
            }
            else{
            printf("%i %i %i\n", num1, num2, num3);
            NumericalPairs(num1+1, num2+1, 1, counter+1);
            }
        }
        else{
            printf("%i %i %i\n", num1, num2, num3);
            NumericalPairs(num1+1, num2, num3+1, counter+1);
        }
    }
}