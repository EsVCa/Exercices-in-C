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
//Descripcion del programa:  Este programa Calcula la serie de Bell con de la cantidad de terminos dada por el usuario
//Salvedad: Solo toma valores positivos
#include <stdio.h>
int CalculateTerm(int);

//Calcula el factorial
long long int DoFactorial (int number){
	if (number==0)
		return 1;
	else 
		return number*DoFactorial(number-1);
}

//Calcula la sumatoria de un termino
int SummationStirling (int n, int i) {
    return (DoFactorial(n-1)/(DoFactorial(i)*DoFactorial((n-1)-i)));
}

//Calcula la sumatoria
int SummationBell( int n, int i, int acummulator ){
	if (i > n-1) {// i<n-1
        return acummulator;
    } else {
        return SummationBell(n, i+1, acummulator + SummationStirling(n, i)*CalculateTerm(i));
    }
}

//Funcion principal de la sumatoria de bell
int CalculateTerm(int term){
	if(term==0 || term==1)
		return 1;
	else
		return SummationBell(term, 0, 0);
}

//Imprime los valores termino a termino
void PrintBell( int term, int quantity){
	if ( term<quantity){
		printf("%i, ", CalculateTerm(term));
		PrintBell(term+1, quantity);
	}
	else
		printf("%i.", CalculateTerm(term));
}

//Funcion Principal
int main(){
	int quantityTerms = 0;
	
	printf("Ingrese el numero de terminos que desea conocer de la serie de Bell: ");
	scanf("%i", &quantityTerms);
	PrintBell(0, quantityTerms-1);
	return 0;
}