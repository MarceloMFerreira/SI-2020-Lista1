#include<stdio.h>
#include<stdlib.h>
int main()
{
	int val,i;
	
	printf("Calcularemos o fatorial de um numero\n");
	printf("Informe um valor: ");
	scanf("%d",&val);
	printf("Fatorial de %d: ",val);
	
	for(i=val-1; i>0; i--){
		val = val*i;
		}
	
	printf("%d\n",val);
	
	system("pause");
	return 0;
}
