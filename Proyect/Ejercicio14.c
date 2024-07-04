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
//Descripcion del programa:  Este programa Muestra las multiplicaciones de la tabla del uno hasta la tabla del 10
//Salvedad: Solo toma valores positivos
#include <stdio.h>
void multiplier(int, int);

int main(){
    multiplier(1, 1);//Inicia en la multiplicacion 1x1
}

//Funcion para mostrar las tablas de multiplicar
void multiplier(int num1, int num2){
    if(num1<=10){
        if(num2<=10){
            printf("%i x %i = %i\n", num1, num2, num1*num2);
            multiplier(num1, num2+1);
        }
        else 
        multiplier(num1+1, 1);
    }
}