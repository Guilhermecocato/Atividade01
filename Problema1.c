#include <stdio.h>
 
int main()
{
	float primeiranota, segundanota, media;
	
	//DADAS AS DUAS NOTAS DE UM ALUNO,INFORME A SUA MEDIA FINAL;
	
	printf("CALCULE A MEDIA:");
	
	printf("\n\nPRIMEIRA NOTA = ");
	scanf("%f", &primeiranota);
	printf("SEGUNDA NOTA = ");
	scanf("%f", &segundanota);
	
	media = (primeiranota + segundanota) / 2;
	printf("\nMEDIA = %4.2f\n", media);
	
	return(0);
}
