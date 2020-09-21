#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float cd,vr;
	
	printf("Informe a cotação do dólar: ");
	scanf("%f",&cd);
	printf("Informe o valor disponivel em reais: ");
	scanf("%f",&vr);
	
	printf("Valor disponivel em dólar: %.2f\n",vr/cd);
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
