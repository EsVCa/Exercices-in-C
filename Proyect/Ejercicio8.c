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
//Descripcion del programa:  Este programa Calcula la serie de Catalan con de la cantidad de terminos dada por el usuario
//Salvedad: Solo toma valores positivos
#include <stdio.h>

//Calcula el factorial de un numero
long long int DoFactorial (int number){
	if (number==0)
		return 1;
	else 
		return number*DoFactorial(number-1);
}

//Calcula el Termino catalan correspondiente
int CalculateTerm (long int term){
	if (term==0)
		return 1;
	else 
		return DoFactorial(2*term)/(DoFactorial(term)*DoFactorial(term+1)); 
}

//Imprime la Serie
void PrintCatalan( int term, int quantity){
	if ( term<quantity){
		printf("%i, ", CalculateTerm(term));
		PrintCatalan(term+1, quantity);
	}
	else
		printf("%i.", CalculateTerm(term));
}

//Funcion Principal
int main(){
	int quantityTerms = 0;//Cantidad de terminos
	
	printf("Ingrese el numero de terminos que desea conocer de la serie de Catalan: ");
	scanf("%i", &quantityTerms);
	PrintCatalan(0, quantityTerms-1);
	return 0;
}