#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Informe um numero inteiro de 1 a 7: ");
	scanf("%d",&n);
	
	switch(n)
	{
	
	case 1: 
	printf("Segunda Feira\n");
	break;
	
	case 2:
	printf("Terça Feira\n");
	break; 
	
	case 3:
	printf("Quarta\n");
	break;
	
	case 4:
	printf("Quinta\n");
	break;
	
	case 5:
	printf("Sexta\n");
	break;
	
	case 6:
	printf("Sabado\n");
	break;
	
	case 7:
	printf("Domingo\n");
	break;
	
	default :
	printf("Valor invalido\n");
}
	
	system("pause");
	return 0;
}
