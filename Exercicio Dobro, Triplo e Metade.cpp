#include <stdio.h>

float calcula_dobro(float x){
	return x * 2;
}

float calcula_triplo(float x){
	return x * 3;
}

float calcula_metade(float x){
	return x / 2;
}



int main () { 

    int numero, dobro, triplo; 
	float metade;
	
	/*Solicitar ao usuário o numero*/
	
	printf ("Digite o valor: ");
	scanf ("%d", &numero);
	
	/*Calcular o dobro*/
	
	dobro = calcula_dobro(numero);
	printf ("%d o dobro desse valor e = %d\n", numero, dobro);
	
	/*Calcular o triplo*/
	
	triplo = calcula_triplo(numero);
	printf ("%d o triplo desse valor e = %d\n", numero, triplo);
	
	/*Calcula a metade*/
	
	metade = calcula_metade(numero);
	printf ("%d a metade desse valor e = %2.f\n", numero, metade);
	
	

	return 0;
}
