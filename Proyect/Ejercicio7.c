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
//Descripcion del programa:  Este programa Calcula la serie de Narayana con de la cantidad de terminos dada por el usuario
//Salvedad: Solo toma valores positivos
#include <stdio.h>
int SerieNarayana (int, int, int, int, int);
int main(){
    int num=0;//Cantidad Parametros
    printf ("Ingrese el numero de terminos que desea en la serie de Narayana: ");
    scanf("%i", &num);
    SerieNarayana (1, 1, 1, 0, num);

    return 0;
}
//Calcular Serie
int SerieNarayana (int start, int data1, int data2, int counter, int end){
    if(counter<end){
        printf("%i, ", start);
        SerieNarayana (data1, data2, start+data2, counter+1, end);
    }
    else
        printf("%i.", start);

    return 0;
}