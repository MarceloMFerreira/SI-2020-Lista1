#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,h,r;
	
	printf("Informe o valor do raio: ");
	scanf("%f",&r);
	printf("Informe o valor da altura: ");
	scanf("%f",&h);
	
	a=2*3.14*r*(r+h);
	printf("Area do cilindro: %.2f\n",a);
	
	
	system("pause");
	return 0;
}
