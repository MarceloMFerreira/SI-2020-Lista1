#include<stdio.h>
#include<stdlib.h>
int main()
{
	float tg,vm,d,lu,n;
	printf("Informe quantos km por litro o carro faz: ");
	scanf("%f",&n);
	printf("Informe o tempo gasto na viagem: ");
	scanf("%f",&tg);
	printf("Informe a velocidade media durante a viagem: ");
	scanf("%f",&vm);
	d = tg * vm;
	lu = d / n;
	
	printf("Distancia percorrida: %.0f\nQuantidade de litros utilizados na viagem %.0f:\n",d,lu);

	
	
	
	system("pause");
	return 0;
}

