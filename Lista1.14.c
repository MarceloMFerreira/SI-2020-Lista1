#include<stdio.h>
#include<stdlib.h>
int main()
{
	float p,imc,h;
	
	printf("Informe seu peso(kg): ");
	scanf("%f",&p);
	printf("Informe sua altura(m): ");
	scanf("%f",&h);
	
	imc = p/(h*h);
	
	if(imc<20){
		printf("Abaixo do peso\n");
	}else if(imc >=20 && imc <= 25){
		printf("Peso ideal\n");
	}else if(imc >=25 && imc <= 30){
		printf("Sobre peso\n");
	}else if(imc >= 30 && imc <= 40){
		printf("Obeso\n");
	}else if(imc > 40){
		printf("Obeso morbido\n");
	}
	
	system("pause");
	return 0;
}
