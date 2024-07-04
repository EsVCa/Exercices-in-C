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
//Descripcion del programa:   Este programa Genera una figura con la letra P
#include <stdio.h>
void Spaces(int);
void LettterP(int);
void FormLetter(int, int, int);

int main(){
    FormLetter(7, 0, 0);
    return 0;
}

//Genera una cantidad de espacios
void Spaces(int amount){
    if(amount>0){
        printf(" ");
        Spaces(amount-1);
    }
}

//Genera una de las letras dependiendo de i
void LetterPNLJHFD(int amount, int i){
    char letter [8] = "PNLJHFD";
    if(amount>0){
        printf("%c", letter[i]);
        Spaces(1);
        LetterPNLJHFD(amount-1, i);
    }
    else 
        printf("\n");
}

//Forma la figura
void FormLetter(int amount, int space, int i){
    if (amount>0){
        Spaces(space);
        LetterPNLJHFD(amount, i);
        FormLetter(amount-1, space+1, i+1);
    }
}