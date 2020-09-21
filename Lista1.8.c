#include<stdio.h>
#include<stdlib.h>
int main()
{
	float cf,cc;
	
	printf("Informe o custo de fabrica do carro: ");
	scanf("%f",&cf);
	
	cc= cf + (cf*25/100) + (cf*42/100);
	
	printf("Custo do consumidor: %.2f\n",cc);
	
	
	
	
	
	
	system("pause");
	return 0;
}
