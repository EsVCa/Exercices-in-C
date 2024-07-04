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
//Descripcion del programa:  Este programa Invierte un numero dado por el usuario
//Salvedad: Solo toma valores positivos

#include <stdio.h>
void turNum (int);
int main(){
    int num=0; //Recibe el numero dado por el usuario
    printf ("Escriba el numero que quiere reordenar: ");
    scanf("%i", &num);
    turNum (num);

}

//Funcion que invierte el numero
void turNum (int num) {
    if(num>0) {
        printf("%i", num%10);
        turNum(num/10);
    }
}