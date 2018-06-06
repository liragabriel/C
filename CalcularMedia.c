#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, media;
	
	printf("Digite a nota da N1\n");
	scanf("%i", &n1); 
	
	printf("Digite a nota da N2\n");
	scanf("%i", &n2);
	
	printf("Digite a nota da N3\n");
	scanf("%i", &n3);
	
	media = (n1+n2+n3)/3;
	
	if(media>=6 && media<=10){
		printf("Aluno aprovado\nSua nota final eh %i", media);
	}
	else if(media<6){
		printf("Aluno reprovado\nSua nota final eh %i", media);
	}
	else{
		printf("Nota invalida, digite valores de 0 a 10"); 
	}
	
	return 0;
}
