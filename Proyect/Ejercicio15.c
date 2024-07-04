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
//Descripcion del programa:  Este programa Imprime la serie de factoriales desde el termino cero hasta el termino dado por el usuario
//Salvedad: Solo toma valores positivos
#include <stdio.h>
int DoFactorial(int);
void PrintFactorial(int, int);

int main(){
    int num=0;
    printf("Escriba el numero para hayarle una factorial: ");
    scanf("%i", &num);
    PrintFactorial(0, num);
    
    }

//Calcula el factorial
int DoFactorial (int number){
	if (number==0)
		return 1;
	else 
		return number*DoFactorial(number-1);
}

//Imprime termino a termino
void PrintFactorial( int term, int quantity){//Term es para el termino y el que varia, quantity es el termino final
	if ( term<quantity){
		printf("%i, ", DoFactorial(term));
		PrintFactorial(term+1, quantity);
	}
	else
		printf("%i.", DoFactorial(term));
}