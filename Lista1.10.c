#include<stdio.h>
#include<stdlib.h>
int main(){
	int v1,v2,op;
	printf("Informe um valor: ");
	scanf("%d",&v1);
	printf("Informe o segundo valor: ");
	scanf("%d",&v2);
	
	printf("Digite o umero correspondente:\n1- ' + '\n2- ' - '\n3- ' * '\n4- ' / '\n");
	scanf("%d",&op);
	
	switch(op)
	{
	
	case 1:
	printf("Soma: %d",v1+v2);
	break;
	
	case 2:
	printf("Subtracao: %d",v1-v2);
	break;
	
	case 3:
	printf("Multiplicacao: %d",v1*v2);
	break;
	
	case 4:
	printf("Divisao: %d",v1/v2);
	break;
	
	default:
		printf("Opcao invalida");
		system("pause");
	
	}	
	
	
	
	return 0;
}
