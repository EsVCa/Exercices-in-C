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
//Descripcion del programa:   Este programa Hace un efecto de movimientos de dos A ubicadas en dos extermos 

#include <stdio.h>
#include <unistd.h>

// Función para imprimir la animación de los movimientos de las letras A.
void printAnimation(int x1, int x2) {//Parametros de posicion
    if (x1 == 40 && x2 == 41)//En el momento que los dos se muevan 4 espacios, se detiene el programa 
        return;

    printf("\033[H\033[J");//Funcion para ir borrando el recorrido luego de pasarlo
    printf("%*sA%*sA\n", x1, "", x2 - x1 - 1, "");

    if (x1 < 40) 
        x1++;
    if (x2 > 41) 
        x2--;

    usleep(100000); // Ajuste el tiempo de espera a 200,000 microsegundos (0.2 segundos)
    printAnimation(x1, x2);//Se vuelve a llamar de forma recursiva
}

int main() {
    printAnimation(0, 80);//Se llama a la funcion con dos A, una en la posricion uno y otro en la posicion 8
    return 0;
}

