#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

//f(x)= cos^2x 

float a,b,delta;int n;
	
void retangulo(){
	printf("Valor de A\n");scanf("%f", &a);
	printf("Valor de B\n");scanf("%f", &b);
	printf("Numero de intercessoes\n");scanf("%i",&n);
	
	delta = (b-a)/n;}

void riemann(){
	int x;float resultado, total = 0;
	for (x = 1; x <= n; x++){
		resultado = ((cos(a+x*delta))*(cos(a+x*delta)))* delta;
		total = total + resultado;}
	printf("%f", total);}
	
int main(){
	retangulo();
	riemann();
	return 0;}
