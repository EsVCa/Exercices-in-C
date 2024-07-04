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
//Descripcion del programa:  Este programa Calcula la serie de Perrin con de la cantidad de terminos dada por el usuario
#include <stdio.h>
void SeriePerrin (int, int, int, int, int);
int main(){
    int num=0;//Cantidad de terminos
    printf ("Ingrese el numero de terminos que desea en la serie de Perrin: ");
    scanf("%i", &num);
    SeriePerrin (3, 0, 2, 0, num);

    return 0;
}
//Calcula serie
void SeriePerrin (int nMenos2, int nMenos1, int n, int counter, int end){
    if(counter<end){
        printf("%i, ", nMenos2);
        SeriePerrin (nMenos1, n, nMenos2+nMenos1, counter+1, end);
    }
    else
        printf("%i, ", nMenos2);
}

