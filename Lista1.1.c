#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float cd,vr;
	
	printf("Informe a cota��o do d�lar: ");
	scanf("%f",&cd);
	printf("Informe o valor disponivel em reais: ");
	scanf("%f",&vr);
	
	printf("Valor disponivel em d�lar: %.2f\n",vr/cd);
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
